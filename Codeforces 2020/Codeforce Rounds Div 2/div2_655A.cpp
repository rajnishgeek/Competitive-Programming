#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,1);
        for(auto it=v.begin();it!=v.end();++it)
            cout<<*it<<" ";
        cout<<endl;
    }
    return 0;
}
