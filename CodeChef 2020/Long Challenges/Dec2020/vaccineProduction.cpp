#include<bits/stdc++.h>
using namespace std;

int countDays(int early, int v1, int late, int v2, int p)
{
	int days = early - 1;
	int diff = late - early;
	while (diff--)
	{
		if (p <= v1)
			return ++days;
		else
		{
			p -= v1;
			days++;
		}
	}

	diff = p / (v1 + v2);
	if (p % (v1 + v2) == 0)
	{
		days += diff;
		return days;
	}

	days += diff + 1;
	return days;
}

int vaccineProduction(int d1, int v1, int d2, int v2, int p)
{
	if (p <= 0 || v1 < 0 || v2 < 0 || d1 <= 0 || d2 <= 0)
		return 0;
	else if (d1 == d2)
	{
		int totaldays = d1 - 1;
		if ( p % (v1 + v2) == 0)
		{
			totaldays += p / (v1 + v2);
			return totaldays;
		}
		else
		{
			totaldays += p / (v1 + v2) + 1;
			return totaldays;
		}
	}
	else if (d1 < d2)
		return countDays(d1, v1, d2, v2, p);
    return countDays(d2, v2, d1, v1, p);
}
int main()
{
	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	cout << vaccineProduction(d1, v1, d2, v2, p) << endl;
	return 0;
}
