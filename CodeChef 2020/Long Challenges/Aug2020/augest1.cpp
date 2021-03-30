#include<bits/stdc++.h>
using namespace std;

int isChefServive(int h, int p)
{
    if(p==0 && p<h)
        return 0;
    while(p>0&&h>0)
    {
        h-=p;
        p/=2;
    }
    //chef attach first then chefs power become p/2
    //so first check dorths power then chefs power
    if(h<=0)
        return 1;
    else if(p<=0)
        return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,p;
        cin>>h>>p;
        cout<<isChefServive(h,p)<<endl;
    }
    return 0;
}
