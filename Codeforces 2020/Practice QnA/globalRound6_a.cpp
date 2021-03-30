#include<bits/stdc++.h>
using namespace std;

bool isDivisible60(string &s)
{
    int sum=0,c=0;
    bool z=false;
    for(int i=0;i<s.size();i++)
    {
        if(!(s[i]-'0'))
            z=true;
        if((s[i]-'0')%2==0)
            c++;
        sum+=s[i]-'0';
    }
    return sum%3==0 && z && c>=2? true : false;
}
int main()
{
    int n;
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        a[i]=isDivisible60(s);
    }
    for(int i=0;i<n;i++)
        a[i]?cout<<"red"<<endl: cout<<"cyan"<<endl;
    return 0;
}
