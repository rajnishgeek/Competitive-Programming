#include<bits/stdc++.h>
using namespace std;

bool isPossible(string a, int n, int h)
{
	map<int, int> m;
	int time = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == '0')
			time++;
		else if (a[i] == '1')
		{
			if (time > 0)
				++m[time];
			time = 0;
		}
	}

	if (time > 0)
		++m[time];
	for (auto it = m.rbegin(); it != m.rend();)
	{
		if (h < it->first)
			it++;
		else if (h == it->first && it->second > 0)
			return true;
		else if (h > it->first && it->second > 0)
		{
			h = 2 * (h - it->first);
			it->second = it->second - 1;
			if (it->second == 0)
				it++;
		}
	}
	return false;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int l, h;
		cin >> l >> h;
		string a;
		cin >> a;
		if (isPossible(a, l, h))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
