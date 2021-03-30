#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
 }

int lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 }

void xAndYValues(ll &l, ll &r)
{
    if(l<=0 || r<=0)
    {
        cout<<"-1"<<" "<<"-1";
        return;
    }
    for(ll i=l;i<=r-1;i++)
    {
        for(ll j=i+1;j<=r;j++)
        {
            if(lcm(i,j)>=l && lcm(i,j)<=r)
            {
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    cout<<"-1"<<" "<<"-1";
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll l,r;
       cin>>l>>r;
       xAndYValues(l,r);
       cout<<endl;
   }
   return 0;
}
