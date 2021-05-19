#include<bits/stdc++.h>
using namespace std;
#define ll long long

void winner(string arr[], int n, ll a, ll b)
{
    ll count_a=0, count_b=0;
    //EQUINOX
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]=='E' || arr[i][0]=='Q' || arr[i][0]=='U' || arr[i][0]=='I' || arr[i][0]=='N' || arr[i][0]=='O' || arr[i][0]=='X')
            count_a+=a;
        else
            count_b+=b;
    }
    if(count_a>count_b)
    {
        cout<<"SARTHAK";
        return;
    }
    else if(count_a<count_b)
    {
        cout<<"ANURADHA";
        return;
    }
    cout<<"DRAW";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll a,b;
        cin>>n>>a>>b;
        string arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        winner(arr, n, a, b);
        cout<<endl;
    }
}
