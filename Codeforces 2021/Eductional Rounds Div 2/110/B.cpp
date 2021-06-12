#include<bits/stdc++.h>
using namespace std;
int goodNumber(int a[], int n)
{
	sort(a, a + n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (__gcd(a[i], 2 * a[j]) > 1)
				count++;
		}
	}
	return count;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << goodNumber(arr, n) << endl;
	}
	return 0;
}
