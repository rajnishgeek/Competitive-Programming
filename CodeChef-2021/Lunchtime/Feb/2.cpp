#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[10];
ll k;
int minDifficulty()
{
    int i=9;
    while(i>=0)
    {
        if(a[i]<=k)
        {
            k-=a[i];
            i--;
        }
        else
            return i+1;
    }
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<10;i++)
        cin>>a[i];
        cin>>k;
        cout<<minDifficulty()<<endl;
    }
    return 0;
}
