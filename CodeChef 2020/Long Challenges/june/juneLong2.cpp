#include<bits/stdc++.h>
using namespace std;

int maxPair(string s)
{
	int countpair = 0;
	for (int i = 0; i < s.size();)
	{
		if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
		{
			countpair++;
			i = i + 2;
		}
		else
			i++;
	}
	return countpair;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		cout << maxPair(s) << endl;
	}
	return 0;
}
