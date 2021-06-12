#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll solve(ll arr[], int n, int k)
{
	sort(arr, arr + n);
	ll sum1 = 0, sum2 = 0;
	int i = n - 1, j = n - 2;
	for (int p = 0; p < k; p++)
	{
		sum1 += arr[i];
		i -= 2;
		sum2 += arr[j];
		j -= 2;
	}
	sum2 += arr[j + 1];
	return max(sum1, sum2);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		ll arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << solve(arr, n, k) << endl;
	}
	return 0;
}
