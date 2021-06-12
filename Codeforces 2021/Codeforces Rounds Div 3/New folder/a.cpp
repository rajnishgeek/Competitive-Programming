#include<bits/stdc++.h>
using namespace std;

int minMove(int a[], int n)
{
	int i, j;
	for (int p = 0; p < n; p++)
	{
		if (a[p] == 1)
			i = p;
		if (a[p] == n)
			j = p;
	}
	if (i > j)
		swap(i, j);
	int left = j - i + i + 1;
	int right = j - i + (n - j);
	int mid = i + 1 + (n - j);
	return min(left, min(right, mid));
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
		cout << minMove(a, n) << endl;
	}
	return 0;
}