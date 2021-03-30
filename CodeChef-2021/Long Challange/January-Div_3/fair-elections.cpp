#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int minimumSwap(int a[], int b[], int n, int m)
{
	if (n <= 0)
		return -1;
	int i, j, sum1 = 0, sum2 = 0;
	for (i = 0; i < n; i++)
		sum1 += a[i];
	for (j = 0; j < m; j++)
		sum2 += b[j];
	sort(a, a + n);
	sort(b, b + n, compare);
	i = 0, j = 0;
	int temp,countswap = 0;
	while (i < n && j < m)
	{
		if (sum1 > sum2)
			return countswap;
		if (a[i] >= b[j])
			return -1;
		sum1 -= a[i];
		sum2 -= b[j];
		temp = a[i];
		a[i] = b[j];
		b[j] = temp;
		sum1 += a[i];
		sum2 += b[j];
		countswap++;

		i++;
		j++;
	}
	return sum1 > sum2 ? countswap : -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, i;
		cin >> n >> m;
		int a[n], b[m];
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i= 0; i < m; i++)
			cin >> b[i];
		cout << minimumSwap(a, b, n, m) << endl;
	}
	return 0;
}
