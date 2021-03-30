#include<bits/stdc++.h>
using namespace std;

long long int skipedSteps(int a[], int n)
{
	long long int countsteps = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != a[i + 1])
			countsteps += (abs(a[i + 1] - a[i]) - 1);
	}
	return countsteps;
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
		cout << skipedSteps(a, n) << endl;
	}
	return 0;
}
