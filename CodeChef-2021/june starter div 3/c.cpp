#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		unordered_map<string, ll> m;
		//dive 3
		for (ll i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			ll value;
			cin >> value;
			if (m.count(s))
				m[s] = m[s] + value;
			else
				m.insert(make_pair(s, value));
		}
		//cout << endl;
		//div 2
		for (ll i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			ll value;
			cin >> value;
			if (m.count(s))
				m[s] = m[s] + value;
			else
				m.insert(make_pair(s, value));
		}
		//cout << endl;
		//div 1
		for (ll i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			ll value;
			cin >> value;
			if (m.count(s))
				m[s] = m[s] + value;
			else
				m.insert(make_pair(s, value));
		}
		vector<ll> res;
		for (auto it : m)
			res.push_back(it.second);
		sort(res.begin(), res.end());
		for (ll i = 0; i < res.size(); i++)
			cout << res[i] << " ";
		cout << endl;
	}
}
