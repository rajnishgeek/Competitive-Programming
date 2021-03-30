#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll EvenPairSum(ll a, ll b)
{
	if (a <= 0 || b <= 0)
		return 0;
	return ((a / 2) * (b / 2) + ((a + 1) / 2) * ((b + 1) / 2));
}
/*
ll EvenPairSum(ll a, ll b)
{
	if (a <= 0 || b <= 0)
		return 0;
	ll i, j, countpair = 0;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if ((i + j) % 2 == 0)
			{
				countpair++;
			}
		}
	}

	return countpair;
}*/
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		cout << EvenPairSum(a, b) << endl;
	}
	return 0;
}