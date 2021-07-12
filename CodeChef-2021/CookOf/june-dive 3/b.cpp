#include<bits/stdc++.h>
using namespace std;
int number(int a[], int n)
{
	unordered_set<int> s;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 1 && a[i] <= 7)
		{
			if (s.count(a[i]) == 0)
				s.insert(a[i]);
		}
		count++;
		if (s.size() == 7)
			return count;
	}
	return 0;
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
		cout << number(a, n) << endl;
	}
	return 0;
}