#include<bits/stdc++.h>
using namespace std;

int requiredDays(int a[], int n, int d)
{
	if (n <= 0 || d <= 0)
		return 0;
	if (d == 1)
		return n;

	int i, risk = 0, notrisk = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] >= 80 || a[i] <= 9)
			risk++;
		else
			notrisk++;
	}
	i = 0; //in i we will store the required days
	//count days dor risky
	if (risk % d == 0)
		i += risk / d;
	else
		i += (risk / d) + 1;

	//for not risky
	if (notrisk % d == 0)
		i += notrisk / d;
	else
		i += (notrisk / d) + 1;
	return i;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, d;
		cin >> n >> d;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << requiredDays(a, n, d) << endl;
	}
	return 0;
}