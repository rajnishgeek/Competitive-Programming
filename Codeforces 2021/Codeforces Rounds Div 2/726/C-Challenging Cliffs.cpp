#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, i;
		cin >> n;
		vector<ll> h(n);
		for (i = 0; i < n; i++)
			cin >> h[i];

		sort(h.begin(), h.end());

		if (n == 2)
		{
			cout << h[0] << " " << h[1] << endl;
			continue;
		}
		ll index = -1;
		int minimumDiff = INT_MAX;
		for (i = 1; i < n; i++)
		{
			if (abs(h[i] - h[i - 1]) < minimumDiff)
			{
				index = i;
				minimumDiff = abs(h[i] - h[i - 1]);
			}
		}
		for (i = index; i < n; i++)
			cout << h[i] << " ";
		for (i = 0; i < index; i++)
			cout << h[i] << " ";
		cout << endl;
	}
	return 0;
}