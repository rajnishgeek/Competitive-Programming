#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void buyShoes(int s1, int s2, int s3, int s4)
{
    map<int,int> m;
    map<int,int>::iterator it;
    m.insert(pair<int,int> (s1,1));
    if(m.count(s2)>0)
    {
        it=m.find(s2);
        it->second=++(it->second);
    }
    else
        m.insert(pair<int,int> (s2,1));

    if(m.count(s3)>0)
    {
        it=m.find(s3);
        it->second=++(it->second);
    }
    else
        m.insert(pair<int,int> (s3,1));

    if(m.count(s4)>0)
    {
        it=m.find(s4);
        it->second=++(it->second);
    }
    else
        m.insert(pair<int,int> (s4,1));

    int buyshoes=0;
    for(it=m.begin();it!=m.end();++it)
    {
        if((it->second)>1)
            buyshoes+=(it->second)-1;
    }
    cout<<buyshoes<<endl;
}
int main()
{
    int s1,s2,s3,s4;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    buyShoes(s1,s2,s3,s4);
    return 0;
}
