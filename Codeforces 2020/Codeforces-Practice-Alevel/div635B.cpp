#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void isDefeat(int &n, int &m, int &x)
{
    for(int i=0;i<n;i++)
    {
        if(x<=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        x=(x/2)+10;
    }
    if(x<=0)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<m;i++)
    {
        if(x<=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        x-=10;
    }
    if(x<=0)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int x,n,m;
        cin>>x;
        cin>>n;
        cin>>m;
        isDefeat(n,m,x);
        cout<<endl;
    }
    return 0;
}
