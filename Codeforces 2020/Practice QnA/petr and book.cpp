#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bookFinishDay(int *dayspages, int pages)
{
    int pagescount=0,dayscount=0;
    for(int i=0;!(pagescount>=pages) && i<7;)
    {
        dayscount=i+1;
        pagescount+=dayspages[i];
        ++i;
        if(i==7)
            i=0;
    }
    cout<<dayscount<<endl;
}
int main()
{
    int pages;
    cin>>pages;
    int dayspages[7];
    for(int i=0;i<7;i++)
        cin>>dayspages[i];
    bookFinishDay(dayspages,pages);
    return 0;
}
