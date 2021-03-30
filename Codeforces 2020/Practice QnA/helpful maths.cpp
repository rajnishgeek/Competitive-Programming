#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void helpfulMath(string &s)
{
    int ones=0,twoes=0,threes=0;
    for(int i=0;i<s.size();i+2)
    {
        if(s[i]=='1')
            ones++;
        else if(s[i]=='2')
            twoes++;
        else if(s[i]=='3')
            threes++;
    }
    while(ones)
    {
        cout<<"1"<<"+";
        ones--;
    }
    while(twoes)
    {
        cout<<"2"<<"+";
        twoes--;
    }
    while(threes)
    {
        cout<<"3"<<"+";
        threes--;
    }
}
int main()
{
    string s;
    cin>>s;
    helpfulMath(s);
    return 0;
}
