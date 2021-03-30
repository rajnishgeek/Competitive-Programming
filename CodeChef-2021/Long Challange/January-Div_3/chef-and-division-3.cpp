#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll maximumContext(ll a[], ll n, ll k, ll d)
{
	if (n <= 0 || k <= 0 || d <= 0)
		return 0;
	ll i, sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];

	i = sum / k;
	return (d <= i) ? d : i;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k, d;
		cin >> n >> k >> d;
		ll questions[n];
		for (ll i = 0; i < n; i++)
			cin >> questions[i];
		cout << maximumContext(questions, n, k, d) << endl;
	}
	return 0;
}