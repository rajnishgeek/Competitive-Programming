#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*void positionValue(int n, int k)
{
    if(k>n)
        return;
    //for odd values
    int position=1,countvalue=1;
    while(countvalue<=n)
    {
        if(position==k)
        {
            cout<<countvalue<<endl;
            return;
        }
        position++;
        countvalue+=2;
    }
    //for even values
    countvalue=2;
    while(countvalue<=n)
    {
        if(position==k)
        {
            cout<<countvalue<<endl;
            return;
        }
        position++;
        countvalue+=2;
    }
}
*/
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    n=(n+1)/2;
    cout<<(k>n?2*(k-n):2*k-1)<<endl;
    //positionValue(n,k);
    return 0;
}
