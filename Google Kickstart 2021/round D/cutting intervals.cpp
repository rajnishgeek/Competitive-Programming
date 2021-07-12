#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll maximumInterval(int a[][2], ll n, ll c)
{

}

int main()
{
	int t;
	cin >> t;
	for (int q = 1; q <= t; q++)
	{
		ll n, c;
		cin >> n >> c;
		ll a[n][2];
		for (ll i = 0; i < n; i++)
			cin >> a[i][0] >> a[i][1];
		cout << "Case #" << q << ": " << maximumInterval(a, n, c) << endl;
	}
	return 0;
}