#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void lightCurrentState(int light[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(light[i][j]%2!=0)
                light[i][j]=0;
            else if(light[i][j]%2==0)
                light[i][j]=1;
        }
    }
    //print light current state
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
          cout<<light[i][j];
          cout<<endl;
    }

}
int main()
{
    int light[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>light[i][j];
        cout<<endl;
    }
    lightCurrentState(light);
    return 0;
}
