#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<t;i++)
    {
        int triangle=4*arr[i]-2;
        int div=triangle/arr[i];
        int res=triangle/div;
        cout<<res<<endl;
    }
    return 0;
}
