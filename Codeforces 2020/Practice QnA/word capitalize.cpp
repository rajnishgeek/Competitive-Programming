#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void capitalizeWord(string &word)
{
    int i=0;
    if(islower(word[i]))
    {
        int c=word[i];
        word[i]=toupper(c);
    }
}
int main()
{
    string word;
    cin>>word;
    capitalizeWord(word);
    cout<<word;
    return 0;
}
