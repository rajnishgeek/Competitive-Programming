#include<bits/stdc++.h>
using namespace std;

void smallesetSubsequenceLength(set<int> a, set<int> b)
{
	for (auto ita = a.begin(); ita != a.end(); ++ita)
	{
		if (b.count(*ita))
		{
			cout << "YES" << endl;
			cout << "1 " << *ita;
			return;
		}
	}
	cout << "NO";
	return;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		set<int> a;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.insert(x);
		}
		set<int> b;
		for (int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			b.insert(x);
		}
		smallesetSubsequenceLength(a, b);
		cout << endl;
	}
	return 0;
}
