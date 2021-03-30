#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int maxDigit(long long n)
{
    map<int,int> m;
    map<int,int>::iterator it;
    while(n)
    {
        int digit=n%10;
        n/=10;
        if(m.count(digit))
        {
            it=m.find(digit);
            it->second=++(it->second);
        }
        else
            m.insert(pair<int,int> (digit,1));
    }
    int max=INT_MIN,maxdigit;
    for(auto i=m.rbegin();i != m.rend();++i)
    {
        if(i->second>=max)
        {
            max=i->second;
            maxdigit=i->first;
        }
    }
    return maxdigit;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    long long  a[t];
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        a[i]=maxDigit(n);
    }
    for(int i=0;i<t;i++)
        cout<<a[i]<<endl;
    return 0;
}
