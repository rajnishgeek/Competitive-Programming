#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n, q;
	cin >> n >> q;
	ll a[n];
	for (ll i = 0; i < n; i++)
		cin >> a[i];
		sort(a,a+n);
	while (q--)
	{
		ll x;
		cin >> x;
		ll i = 0, j = n - 1, index = -1;
		bool flag = false;
		while (i <= j)
		{
			ll mid = i + (j - i) / 2;
			if (x == a[mid])
			{
				cout << "0" << endl;
				flag = true;
				break;
			}
			else if (x < a[mid])
			{

				j = mid - 1;
			}
			else
			{
				index = mid;
				i = mid + 1;
			}
		}
		if (flag == false)
		{
			if ((index + 1) % 2 != 0)
				cout << "NEGATIVE" << endl;
			else
				cout << "POSITIVE" << endl;
		}
	}
	return 0;
}
