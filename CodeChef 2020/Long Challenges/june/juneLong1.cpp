#include<bits/stdc++.h>
using namespace std;

int revenueLost(int arr[], int size, int k)
{
	int countlostrevenue = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > k)
			countlostrevenue += abs(k - arr[i]);
	}
	return countlostrevenue;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << revenueLost(arr, n, k) << endl;
	}
	return 0;
}
