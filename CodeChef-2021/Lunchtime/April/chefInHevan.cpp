#include<bits/stdc++.h>
using namespace std;
void isHeavan(char arr[], int l)
{
    int once=0;
    for(int i=0;i<l;i++)
    {
        if(arr[i]=='1')
         once++;
        double value= (once*100)/(double)(i+1);
        if(value>=50.0)
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        char arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        isHeavan(arr, l);
        cout<<endl;
    }
    return 0;
}
