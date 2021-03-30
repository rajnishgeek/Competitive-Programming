#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
void reconnaissanceUnit(int *heights, int soliders)
{
    int firstsolider,secondsolider,minimal=INT_MAX;
    int i=0,j=1;
    while(i<soliders && j<soliders)
    {
        if(minimal>abs(heights[i]-heights[j]))
        {
            minimal=abs(heights[i]-heights[j]);
            firstsolider=i;
            secondsolider=j;
        }
        i++;
        j++;
    }
    j=0;
    if(minimal>abs(heights[i]-heights[j]))
    {
         firstsolider=i;
         secondsolider=j;
    }
    cout<<firstsolider+1<<" "<<secondsolider+1<<endl;
}
int main()
{
    int soliders;
    cin>>soliders;
    int heights[soliders];
    for(int i=0;i<soliders;i++)
      cin>>heights[i];
    reconnaissanceUnit(heights,soliders);
    return 0;
}
