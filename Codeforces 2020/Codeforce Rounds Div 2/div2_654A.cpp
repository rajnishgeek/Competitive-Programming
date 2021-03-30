#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll countEquals(ll &n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n%2==0)
     return (n/2);
    else
        return ((n/2)+1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<countEquals(n)<<endl;
    }
    return 0;
}
