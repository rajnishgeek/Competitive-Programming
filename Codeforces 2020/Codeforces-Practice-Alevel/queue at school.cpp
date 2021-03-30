#include<iostream>
#include<string>
using namespace std;
void queueAtSchool(string child, int t)
{
    for(int i=1;i<=t;i++)
     child.erase(0,1);
    cout<<child;
}
int main()
{
    int n,t;
    cin>>n;
    cin>>t;
    string child;
    cin>>child;
    queueAtSchool(child,t);
    return 0;
}

