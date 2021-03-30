#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll print(int n)
{
    int a[n+1];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<n+1;i++)
     a[i]=(a[i-1]+a[i-2])-1;
    return a[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<print(n)<<endl;
    }
    return 0;
}

