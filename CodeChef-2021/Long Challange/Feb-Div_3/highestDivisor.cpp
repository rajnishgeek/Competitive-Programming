#include<bits/stdc++.h>
using namespace std;

int highestDivisor(int n)
{
    if(n<=1)
        return -1;
    for(int i=10;i>=1;i--)
        if(n%i==0)
          return i;
    return -1;
}
int main()
{
    int n;
    cin>>n;
    cout<<highestDivisor(n)<<endl;
    return 0;
}
