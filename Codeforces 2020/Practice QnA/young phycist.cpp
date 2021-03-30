#include<iostream>
using namespace std;
/*void youngPhy(int *x,int *y,int *z,int n)
{
    int xsum=0,ysum=0,zsum=0;
    for(int i=0;i<n;i++)
    {
        xsum+=x[i];
        ysum+=y[i];
        zsum+=z[i];
    }
    if(!xsum && !ysum && !zsum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}*/
int main()
{
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
    }
   // youngPhy(&x,&y,&z,n);
   int xsum=0,ysum=0,zsum=0;
    for(int i=0;i<n;i++)
    {
        xsum+=x[i];
        ysum+=y[i];
        zsum+=z[i];
    }
    if(!xsum && !ysum && !zsum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
