#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isDivisible(ll n)
{
    if(n<=2 )
        return false;

    for(ll i=3;i<=n;i=i+2)
    {
        if(n%2!=0 && i==n)
         return true;
        else if(n%i==0)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(isDivisible(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
