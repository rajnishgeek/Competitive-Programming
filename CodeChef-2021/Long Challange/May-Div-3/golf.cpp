#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(ll n, ll x, ll k)
{
	if (x > (n - 1) || k > (n - 1))
		return false;
	//from left to right
	for (ll i = 0; i <= n - 1; i += k)
		if (i == x)
			return true;

	//from right to left
	for (ll i = n - 1; i >= 0; i -= k)
		if (i == x)
			return true;
	return false;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, x, k;
		cin >> n >> x >> k;
		if (isPossible(n + 2, x, k))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
