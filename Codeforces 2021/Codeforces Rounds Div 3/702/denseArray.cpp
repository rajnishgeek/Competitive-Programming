#include<bits/stdc++.h>
using namespace std;
int numberRequired(int a[], int n)
{
    if(n<=0)
        return 0;
    int count=0,value;
    for(int i=1;i<n;i++)
    {
        if(max(a[i-1],a[i])>2*min(a[i-1],a[i]))
        {
            if(a[i-1]<a[i])
            {
                count++;
                value=ceil(a[i]/2);
                while(value>2*a[i-1])
                {
                    count++;
                    value=ceil(value/2);
                }
            }
            else if(a[i-1]>a[i])
            {
                count++;
                value=ceil(a[i-1]/2);
                while(value>2*a[i])
                {
                    count++;
                    value=ceil(value/2);
                }
            }
        }
    }
    return count;
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
        cout<<numberRequired(a,n)<<endl;
    }
    return 0;
}
