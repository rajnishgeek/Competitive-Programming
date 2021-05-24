#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int countPossible(int g)
{
    unordered_set<int> m;
    m.insert(0);
    int count=0;
    ll preSum=0;
    for(int i=1;i<=g+1;i++)
    {
        preSum+=i;
        m.insert(preSum);
        if(preSum-g<0)
         continue;
        if(m.count(preSum-g))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int g;
        cin>>g;
        cout<<"Case #"<<i+1<<": "<<countPossible(g)<<endl;
    }
    return 0;
}
