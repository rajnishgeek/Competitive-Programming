#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void operationsResult(char arr[][3], int n)
{
    int xvalue=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i][0]=='X' && arr[i][2]=='+') || (arr[i][0]=='+' && arr[i][2]=='X') )
            xvalue++;
        else if((arr[i][0]=='X' && arr[i][2]=='-') || (arr[i][0]=='-' && arr[i][2]=='X'))
        xvalue--;
    }
    cout<<xvalue<<endl;
}

int main()
{
    int n;
    cin>>n;
    char arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }
    operationsResult(arr,n);
    return 0;
}
