#include<bits/stdc++.h>
using namespace std;
bool isPossible(int n)
{
    if(n<2020)
        return false;
    if(n==2020 || n==2021)
        return true;
    int div=n/2020;
    int rem=n%2020;
    if(div>=rem)
     return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isPossible(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
