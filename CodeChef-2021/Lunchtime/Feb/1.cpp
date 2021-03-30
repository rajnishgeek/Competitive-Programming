#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n<k || k==0)
            cout<<n<<endl;
        else
            cout<<(n%k)<<endl;
    }
    return 0;
}
