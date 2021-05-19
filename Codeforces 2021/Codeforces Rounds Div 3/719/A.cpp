#include<bits/stdc++.h>
using namespace std;

bool isSuspicious(char arr[], int n)
{
	vector<bool> check(26, false);
	check[arr[0] - 'A'] = true;
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] == arr[i])
			continue;
		if (check[arr[i] - 'A'] == true)
			return true;
		else
			check[arr[i] - 'A'] = true;
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		char arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (isSuspicious(arr, n))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
	return 0;
}