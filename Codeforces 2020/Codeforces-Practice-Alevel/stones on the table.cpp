#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int minStonePick(string &colors)
{
    int i=1,minpickedstone=0;
    while(colors.size()>2)
    {
        if(colors[i]==colors[i-1] || colors[i]==colors[i+1])
        {
            colors.erase(i,1);
            minpickedstone++;
        }
        else
            i++;
        if(i==colors.size()-1)
            break;
    }
    i=0;
    if(colors[i]==colors[i+1])
    {
        colors.erase(i,1);
        minpickedstone++;
    }
    return minpickedstone;
}
int main()
{
    int n;
    cin>>n;
    string colors;
    cin>>colors;
    int minnumber=minStonePick(colors);
    cout<<minnumber<<endl;
    return 0;
}
