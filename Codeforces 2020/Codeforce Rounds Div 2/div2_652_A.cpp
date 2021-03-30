#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==0)
          cout<<"NO"<<endl;
        else if(n%4==0)
         cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }
    return 0;
}
