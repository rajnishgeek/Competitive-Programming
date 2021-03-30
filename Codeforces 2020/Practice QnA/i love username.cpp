#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void amazingPerformance(int *contest,int n)
{
    int countamazing=0,minrank=0,maxrank=0;
    int i=0;
    minrank=contest[i];
    maxrank=contest[i];
    while(i<n)
    {
        if(contest[i]>maxrank)
        {
            maxrank=contest[i];
            countamazing++;
        }
        else if(contest[i]<minrank)
        {
            minrank=contest[i];
            countamazing++;
        }
        i++;
    }
    cout<<countamazing<<endl;
}
int main()
{
    int n;
    cin>>n;
    int contest[n];
    for(int i=0;i<n;i++)
        cin>>contest[i];
    amazingPerformance(contest,n);
    return 0;
}
