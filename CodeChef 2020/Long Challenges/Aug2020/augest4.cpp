#include<bits/stdc++.h>
using namespace std;

void printAnagram(string s, string p)
{
	int s_size = s.size(), p_size = p.size();
	if (p_size > s_size)
		return;
	if (!s_size && !p_size)
	{
		cout << " ";
		return;
	}
	if (s.size() && !p_size)
	{
		sort(s.begin(), s.end());
		cout << s;
		return;
	}

	//added all the char frequency of string s in map
	map<char, int> m;
	for (int i = 0; i < s_size; i++)
		m[s[i]] = ++m[s[i]];


	//chack all the char of string p in map
	for (int i = 0; i < p_size; i++)
	{
		//if p string char found then that frequency decrease
		//by one because it is in both the string
		if (m.count(p[i]))
			m[p[i]] = --m[p[i]];
		//if control reach in else condition is means at least
		//one p string char not present in string s so substring can not
		//be present in string s
		else
			return;
	}

	auto it = m.find(p[0]);
	it++;
	for (auto it2 = m.begin(); it2 != it; it2++)
	{
		while (it2->second != 0)
		{
			cout << it2->first;
			it2->second = --(it2->second);
		}
	}
	cout << p;

	for (; it != m.end(); it++)
	{
		while (it->second != 0)
		{
			cout << it->first;
			it->second = --(it->second);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, p;
		cin >> s;
		cin >> p;
		printAnagram(s, p);
		cout << endl;
	}
	return 0;
}
