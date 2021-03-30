#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void cityNumber(int *city, int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    int index,minimum=city[0],citycount=0;
    int i=1;
    while(i<n)
    {
        if(minimum>=city[i])
        {
            minimum=city[i];
            citycount++;
            index=i+1;
        }
        i++;
    }
    if(citycount>1)
    {
        cout<<"Still Rozdil"<<endl;
        return;
    }
    else
        cout<<index<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cityNumber(arr,n);
    return 0;
}
