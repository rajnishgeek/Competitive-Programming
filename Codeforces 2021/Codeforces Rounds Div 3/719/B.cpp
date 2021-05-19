#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ordinary(ll n)
{
	ll count = 0;
	for (int i = 1; i <= 9; i++)
		for (int value = i; value <= n; value = value * 10 + i)
			count++;
	return count;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		cout << ordinary(n) << endl;
	}
}