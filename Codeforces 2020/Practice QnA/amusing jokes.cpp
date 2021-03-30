#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void isNamePosible(string &gustname, string &hostname, string &pilename)
{
    map<char,int> m1;
    map<char,int> m2;
    map<char,int>::iterator it1;
    map<char,int>::iterator it2;
    for(int i=0;i<gustname.size();i++)
    {
        if(m1.count(gustname[i])>0)
        {
            it1=m1.find(gustname[i]);
            it1->second=++(it1->second);
        }
        else
            m1.insert(pair<char,int> (gustname[i],1));
    }
    for(int i=0;i<hostname.size();i++)
    {
        if(m1.count(hostname[i])>0)
        {
            it1=m1.find(hostname[i]);
            it1->second=++(it1->second);
        }
        else
            m1.insert(pair<char,int> (hostname[i],1));
    }
    for(int i=0;i<pilename.size();i++)
    {
        if(m2.count(pilename[i])>0)
        {
            it2=m2.find(pilename[i]);
            it2->second=++(it2->second);
        }
        else
            m2.insert(pair<char,int> (pilename[i],1));
    }
    if(m1.size()!=m2.size())
        cout<<"NO"<<endl;
    else
    {
        for(it1=m1.begin(),it2=m2.begin();it1!=m1.end() && it2!=m2.end();++it1,++it2)
        {
            if((it1->second)!=(it2->second))
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    string gustname,hostname,pilename;
    cin>>gustname;
    cin>>hostname;
    cin>>pilename;
    isNamePosible(gustname,hostname,pilename);
    return 0;
}
