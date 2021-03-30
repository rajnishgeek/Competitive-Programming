#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string isStepPossible(ll a[], int n, ll k)
{
    string step;
    if(!n || !k)
        return step;
    for(int i=0;i<n;i++)
    {
        if(a[i]%k==0)
            step.push_back('1');
         //step[i]='1';
        else
        step.push_back('0');
            //step[i]='0';
    }
   // cout<<step;
   return step;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        isStepPossible(a,n,k);
        cout<<endl;
    }
    return 0;
}
