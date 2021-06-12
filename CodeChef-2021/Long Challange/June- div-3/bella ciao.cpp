#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll D, d, P, Q;
		cin >> D >> d >> P >> Q;
		ll n = D / d;
		cout << (n * d * P + d * Q * (n * (n - 1)) / 2) + (D % d)*(P + n * Q) << endl;
	}
	return 0;
}
