#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool isPossible(ll x)
{
	ll i;
	for (i = 11; i <= x; i = (i * 10) + 1);
	while (x > 0 && i > 10)
	{
		x = x % i;
		i = i / 10;
		if (x == 0)
			return true;
	}
	return false;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll x;
		cin >> x;
		if (isPossible(x))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}