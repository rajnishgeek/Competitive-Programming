#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void binaryFun(ll x ,string &s)
{
    while(x)
    {
       int digit=x%2;
       x/=2;
       char a=digit-'0';
       s.push_back(a);
    }
}
int completeFunction(ll x,ll y)
{
    string binX,binY;
    binaryFun(x,binX);
    binaryFun(y,binY);
    int i=0;
    //finding number of index for removing leading zeroes
    for(;i<binX.size();i++)
     if(binX[i]!='0')
            break;
    binX.erase(binX.begin(),binX.end()-(i+1));
    //finding index for removing leading zeroes for binY
    i=0;
    for(;i<binY.size();i++)
     if(binY[i]!='0')
            break;
    binY.erase(binY.begin(),binY.end()-(i+1));

    string binXplusY=binX+binY;
    string binYplusX=binY+binX;


    ll XplusY=0;
    XplusY=std::stoi(binXplusY, 0, 2);
    ll YplusX=0;
    YplusX=std::stoi(binXplusY, 0, 2);
    return (XplusY-YplusX);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<completeFunction(a[n-1],a[n-2])<<endl;
    }
    return 0;
}

