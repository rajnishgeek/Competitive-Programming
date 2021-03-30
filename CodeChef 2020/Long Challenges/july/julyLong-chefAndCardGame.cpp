#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int digitSum(ll value)
{
	int sum = 0;
	while (value)
	{
		int digit = value % 10;
		value /= 10;
		sum += digit;
	}
	return sum;
}
void winner(ll a[], ll b[], int n)
{
	int points_a = 0, points_b = 0;
	for (int i = 0; i < n; i++)
	{
		int sum_a = digitSum(a[i]);
		int sum_b = digitSum(b[i]);
		if (sum_a > sum_b)
			++points_a;
		else if (sum_a < sum_b)
			++points_b;
		else
		{
			++points_a;
			++points_b;
		}
	}
	if (points_a > points_b)
	{
		cout << "0" << "  " << points_a;
		return;
	}
	else if (points_a < points_b)
	{
		cout << "1" << "  " << points_b;
		return;
	}
	else
	{
		cout << "2" << "  " << points_a;
		return;
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll a[n], b[n];
		for (int i = 0; i < n; i++)
			cin >> a[i] >> b[i];
		winner(a, b, n);
		cout << endl;
	}
	return 0;
}