#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*void bronze(string bronzecode)
{
    int i=0;
    while(i<bronzecode.length())
    {
        if(bronzecode[i]=='.')
        {
            cout<<"0";
            i++;
        }
        else if(bronzecode[i]=='-' && bronzecode[++i]=='.')
        {
            cout<<"1";
            i++;
        }
        else if(bronzecode[i]=='-' && bronzecode[++i]=='-')
        {
            cout<<"2";
            i++;
        }
    }
}*/
int main()
{
    string bronzecode;
    cin>>bronzecode;
    //bronze(s);
    int i=0;
    while(i<bronzecode.size())
    {
        if(bronzecode[i]=='.')
        {
            cout<<"0";
            i++;
        }
        else if(bronzecode[i]=='-' && bronzecode[++i]=='.')
        {
            cout<<"1";
            i++;
        }
       // else if(bronzecode[i]=='-' && bronzecode[++i]=='-')
       else
        {
            cout<<"2";
            i=i+2;
        }
    }
    return 0;
}



