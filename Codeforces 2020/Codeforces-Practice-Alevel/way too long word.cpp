#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void abberivation(string *word, int n)
{
    for(int i=0;i<n;i++)
    {
         string indexword=word[i];
         if(indexword.size()<11)
           cout<<indexword<<endl;
         else
         {
            int countchar=indexword.size() - 2;
            char firstchar=indexword[0];
            char lastchar=indexword[indexword.size()-1];
            cout<<firstchar<<countchar<<lastchar<<endl;
         }
    }
}
int main()
{
    int n;
    cin>>n;
    string word[n];
    for(int i=0;i<n;i++)
     cin>>word[i];
    abberivation(word,n);
    return 0;
}
