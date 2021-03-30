#include<bits/stdc++.h>
using namespace std;

int minCoins(long long int s,long long int n)
{
	if (n == 0)
		return 0;
	int countCoins = 0;
	if (s > n)
	{

		if (n % 2 == 0)
		{
			if (s % 2 == 0)
			{
				while (s != 0)
				{
					if (n == 0)
						return countCoins;
					if (s < n)
					{
						n = n - 2;
						s = s - n;
						countCoins++;
					}
					else
					{
						s = s - n;
						countCoins++;
					}

				}
				return countCoins;
			}
			else
			{
				s--;
				countCoins++;
				while (s != 0)
				{
					if (n == 0)
						countCoins;
					if (s < n)
					{
						n = n - 2;
						s = s - n;
						countCoins++;
					}
					else
					{
						s = s - n;
						countCoins++;
					}
				}
				return countCoins;
			}
		}
	}
	else if (s <= n)
	{
		n = s;
		if (n % 2 == 0)
		{
			if (s % 2 == 0)
			{
				while (s != 0)
				{
					if (n == 0)
						return countCoins;
					if (s < n)
					{
						n = n - 2;
						s = s - n;
						countCoins++;
					}
					else
					{
						s = s - n;
						countCoins++;
					}

				}
				return countCoins;
			}
			else
			{
				s--;
				countCoins++;
				while (s != 0)
				{
					if (n == 0)
						countCoins;
					if (s < n)
					{
						n = n - 2;
						s = s - n;
						countCoins++;
					}
					else
					{
						s = s - n;
						countCoins++;
					}
				}
				return countCoins;
			}
		}

	}
	return countCoins;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int s, n;
		cin >> s >> n;
		cout << minCoins(s, n) << endl;
	}
	return 0;
}
