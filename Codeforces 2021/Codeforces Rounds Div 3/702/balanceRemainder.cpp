#include<bits/stdc++.h>
using namespace std;
int requiredNumber(int a, int n)
{
    vector<int> zero,one,two;
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
            zero.push_back(a[i]);
        else if(a[i]%3==1)
            one.push_back(a[i]);
        else if(a[i]%3==2)
            two.push_back(a[i]);
    }
    while(c0!=c1 && c0!=c2 && c1!=c2)
    {

    }
    return (c0+c1+c2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<requiredNumber(a,n)<<endl;
    }
    return 0;
}
