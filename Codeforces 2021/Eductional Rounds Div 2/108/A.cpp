#include<bits/stdc++.h>
using namespace std;
#define ll long long
void isDistribute(ll r,ll b,ll d)
{
    ll diff=abs(r-b);
    ll small=min(r,b);
    if(small * d >= diff)
     cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r,b,d;
        cin>>r>>b>>d;
        isDistribute(r, b, d);
        cout<<endl;
    }
    return 0;
}
