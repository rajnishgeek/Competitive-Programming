#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void betterApproach(int arr[], int arrsize, int queries[], int querysize)
{
    int vasya=0,patya=0;
    for(int i=0;i<querysize;i++)
    {
        //for vasya
        for(int j=0;j<arrsize;j++)
        {
            if(queries[i]==arr[j])
            {
                vasya++;
                break;
            }
            else
            vasya++;
        }

    }
    //for patya
    for(int i=0;i<querysize;i++)
    {
        for(int p=arrsize-1;p>=0;p--)
         if(queries[i]==arr[p])
         {
             patya++;
             break;
         }
          else
            patya++;
    }
    cout<<vasya<<" "<<patya<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int query;
    cin>>query;
    int queries[query];
    for(int i=0;i<query;i++)
        cin>>queries[i];
    betterApproach(arr,n,queries,query);
    return 0;
}
