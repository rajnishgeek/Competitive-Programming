#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll findMaximum(ll a[3][3], ll value)
{
	ll count = 0;
	a[1][1] = value;
	//middle row
	if (a[1][1] - a[1][0] == a[1][2] - a[1][1])
		count++;

	//middle col
	if (a[1][1] - a[0][1] == a[2][1] - a[1][1])
		count++;

	//left digonal
	if (a[1][1] - a[0][0] == a[2][2] - a[1][1])
		count++;

	//right digonal
	if (a[1][1] - a[0][2] == a[2][0] - a[1][1])
		count++;

	return count;

}

ll countAP(ll a[3][3])
{
	ll totoal = 0;

	//top row
	if (a[0][1] - a[0][0] == a[0][2] - a[0][1])
		totoal++;

	//bottom row
	if (a[2][1] - a[2][0] == a[2][2] - a[2][1])
		totoal++;

	//left col
	if (a[1][0] - a[0][0] == a[2][0] - a[1][0])
		totoal++;

	//right col
	if (a[1][2] - a[0][2] == a[2][2] - a[1][2])
		totoal++;

	ll maxiCount = 0, d, cal = 0;

	//row middle
	d = (a[1][2] - a[1][0]) / 2;
	cal = findMaximum(a, a[1][0] + d);
	if (maxiCount < cal)
		maxiCount = cal;

	//col middle
	d = (a[2][1] - a[0][1]) / 2;
	cal = findMaximum(a, a[0][1] + d);
	if (maxiCount < cal)
		maxiCount = cal;

	//left digonal
	d = (a[2][2] - a[0][0]) / 2;
	cal = findMaximum(a, a[0][0] + d);
	if (maxiCount < cal)
		maxiCount = cal;

	//right digonal
	d = (a[2][0] - a[0][2]) / 2;
	cal = findMaximum(a, a[0][2] + d);
	if (maxiCount < cal)
		maxiCount = cal;

	return totoal + maxiCount;
}
int main()
{
	int t;
	cin >> t;
	for (int q = 1; q <= t; q++)
	{
		ll a[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 1 && j == 1)
					continue;
				cin >> a[i][j];
			}
		}
		cout << "Case #" << q << ": " << countAP(a) << endl;
	}
	return 0;
}
