#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
void printLCM(ll n)
{
    ll minelement=INT_MAX,a,b;
    for(ll i=1,j=n-1;i<=j;i++,j--)
    {
        if((i+j)==n)
        {
            ll l=(i*j)/gcd(i, j);
            if(l<minelement)
            {
                a=i;
                b=j;
                minelement=l;
            }
        }
    }
    cout<<a<<" "<<b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        printLCM(n);
        cout<<endl;
    }
    return 0;
}
