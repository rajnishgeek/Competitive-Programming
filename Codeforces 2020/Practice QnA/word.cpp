#include<bits/stdc++.h>
#include<cctype>
#include<cstring>
#include<iostream>
using namespace std;
void correctWord(string &word)
{
    int countlowerlatter=0,countupperlatter=0;
    for(int i=0;i<word.size();i++)
    {
        if(islower(word[i]))
            countlowerlatter++;
        else
            countupperlatter++;
    }
    if(countlowerlatter<countupperlatter)
    {
        for(int i=0;i<word.size();i++)
        {
            if(islower(word[i]))
            {
                int c= word[i];
                word[i]=toupper(c);
            }
        }
    }
    else
    {
       for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
            {
                int c= word[i];
                word[i]=tolower(c);
            }

        }
    }
    cout<<word<<endl;
}
int main()
{
    string word;
    cin>>word;
    correctWord(word);
    return 0;
}

