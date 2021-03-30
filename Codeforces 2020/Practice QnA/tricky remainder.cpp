#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void tricky(int &a, int &b, int &c)
{
    int l;
    if(a>b && b>c)
        l=a;
    else if(a>b && c>a)
        l=c;
    else
        l=b;
    while(l)
    {
        if(l<=c && l%a==b)
            break;
        l--;
    }
    if(l==0)
        return;
    cout<<l<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        tricky(a,b,c);
        cout<<endl;
    }
    return 0;
}
