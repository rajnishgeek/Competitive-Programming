#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solutions(int views[][3], int row)
{
    int solution=0;
    for(int i=0;i<row;i++)
    {
        int voting=0;
        if(views[i][1]==1)
            voting++;
        if(views[i][2]==1)
            voting++;
        if(views[i][3]==1)
            voting++;
        if(voting>=2)
            solution++;
    }
    cout<<solution<<endl;
}
int main()
{
    int n;
    cin>>n;
    int views[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
         cin>>views[i][j];
    }
    solutions(views,n);
    return 0;
}
