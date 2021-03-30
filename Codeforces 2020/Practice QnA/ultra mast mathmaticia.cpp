#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void newNumber(string &n1,string &n2)
{
    for(int i=0,j=0;i<n1.size() && j<n2.size();i++,j++)
    {
        if(n1[i]!=n2[j])
            cout<<"1";
        else
            cout<<"0";
    }
}
int main()
{
    string n1,n2;
    cin>>n1;
    cin>>n2;
    newNumber(n1,n2);
    return 0;
}
