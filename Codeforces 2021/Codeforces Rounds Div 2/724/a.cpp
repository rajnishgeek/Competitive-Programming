#include<bits/stdc++.h>
using namespace std;

void nice(int a[], int n)
{
	sort(a, a + n);
	unordered_set<int> s;
	int i, d = a[1] - a[0];
	int lastElement = a[0];
	for (i = 0; i < n; i++)
		s.insert(a[i]);
	i = 1;
	while (i < n )
	{
		if (a[i] - lastElement == d)
		{
			lastElement = a[i++];
		}
		else if (a[i] - lastElement > d)
		{
			lastElement += d;
			s.insert(lastElement);
		}
		else if (a[i] - lastElement < d)
		{
			cout << "NO";
			return;
		}
	}
	cout << "YES" << endl;
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		nice(a, n);
		cout << endl;
	}
	return 0;
}
