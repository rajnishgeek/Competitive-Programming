#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int mex(int a[], int n, int m)
{
	sort(a, a + n);
	for (int i = 0; i < n - 1; i++)
		if (a[i] < m && a[i + 1] > m)
			return n;
	return -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << mex(a, n, m) << endl;
	}
	return 0;
}