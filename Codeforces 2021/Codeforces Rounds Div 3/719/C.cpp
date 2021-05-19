#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, i;
		cin >> n;
		ll arr[n];
		for (i = 0; i < n; i++)
			cin >> arr[i];

		ll pairs = 0;
		for (i = 0; i < n; i++)
			for (ll j = i + 1; j < n; j++)
				if (j - i == arr[j] - arr[i])
					pairs++;
		cout << pairs << endl;
	}
	return 0;
}