#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void maxsum(int a,int b)
{
    string s1;
    int index1=0,minelement=INT_MAX;
    while(a)
    {
        int digit=a%10;
        a/=10;
        if(digit<minelement)
        {
            minelement=digit;
            index1++;
            s1.push_back(digit);
        }
        else
            s1.push_back(digit);
    }
    int index2=0;
    string s2;
    minelement=INT_MAX;
    while(b)
    {
        int digit=b%10;
        b/=10;
        if(digit<minelement)
        {
            minelement=digit;
            index2++;
            s2.push_back(digit);
        }
        else
            s2.push_back(digit);
    }
    index1--;
    index2--;
    char temp=s1[index1];
    s1[index1]=s2[index2];
    s2[index2]=temp;
    string convs1;
    for(int i=s1.size()-1;s1.size()!=0 && i>=0;i--)
    {
        convs1.push_back(s1[i]);
        s1.pop_back();
    }
    string convs2;
    for(int i=s2.size()-1;s2.size()!=0 && i>=0;i--)
    {
        convs2.push_back(s2[i]);
        s2.pop_back();
    }
    a=stoi(convs1);
    b=stoi(convs2);
    cout<<a+b<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        cin>>b;
        maxsum(a,b);
    }
    return 0;
}
