#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void isInstruction(string &p)
{
    for(int i=0;i<p.size();i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9' || p[i]=='+')
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    string p;
    cin>>p;
    isInstruction(p);
    return 0;
}
