#include<bits/stdc++.h>
using namespace std;
int mindiff(int arr[], int n)
{
    int a=0,b=0;
    bool turn=true;
    int i=0,j=n-1;
    for(int times=0;times<n/2;times++)
    {
        if(turn)
        {
            turn=false;
            a+=arr[i];
            ++i;
        }
        else
        {
            turn=true;
            a+=arr[j];
            --j;
        }
    }
    //for b sum
     for(int times=0;times<n/2;times++)
    {
        if(turn)
        {
            turn=false;
            b+=arr[i];
            ++i;
        }
        else
        {
            turn=true;
            b+=arr[j];
            --j;
        }
    }
    return abs(a-b);
}
int main()
{
    int t;
    cin>>t;
    int op[t];
    for(int p=0;p<t;p++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
            arr[i-1]=pow(2,i);
        op[p]=mindiff(arr,n);
    }
    for(int k=0;k<t;k++)
     cout<<op[k]<<endl;
    return 0;
}
