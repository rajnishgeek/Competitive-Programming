#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> m;
    m.insert(pair<int,int> (4,1));
    m.insert(pair<int,int> (3,1));
    m.insert(pair<int,int> (2,1));
    m.insert(pair<int,int> (1,1));
    m.insert(pair<int,int> (7,1));
    unordered_map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<"  "<<it->second<<endl;
    return 0;

}
