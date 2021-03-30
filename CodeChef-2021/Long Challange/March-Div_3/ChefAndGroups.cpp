#include<bits/stdc++.h>
using namespace std;

int numberOfGroups(string s)
{
    int size=s.size();
    if(size==0)
        return 0;
    int i=0,j=0,groups=0;
    while(i<size && j<size)
    {
        if(s[i]=='1' && j<=i)
        {
            j=i+1;
            groups++;
        }
        else if(i<j)
        {
            if(s[j]=='1')
                j++;
            else if(s[j]=='0')
                i=j;
        }
        else if(s[i]=='0')
            i++;
    }
    return groups;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<numberOfGroups(s)<<endl;
    }
    return 0;
}
