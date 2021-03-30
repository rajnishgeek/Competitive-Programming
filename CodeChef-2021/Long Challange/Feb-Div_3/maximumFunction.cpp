#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll maximumFunction(ll a[], int n)
{
    if(n<3)
        return -1;
    sort(a,a+n);
    return (abs(a[0]-a[n-1])+abs(a[n-1]-a[n-2])+abs(a[n-2]-a[0]));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<maximumFunction(a,n)<<endl;
    }
    return 0;
}
