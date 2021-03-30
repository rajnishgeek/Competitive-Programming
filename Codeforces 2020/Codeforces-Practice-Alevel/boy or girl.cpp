#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void chatOrNot(string &username)
{
    set<char> s;
    for(int i=0;i<username.size();i++)
     s.insert(username[i]);
    if(s.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
int main()
{
    string username;
    cin>>username;
    chatOrNot(username);
    return 0;
}
