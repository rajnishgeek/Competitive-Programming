#include<bits/stdc++.h>
using namespace std;
bool isFair(int a[])
{
	int max1 = 0, max2 = 0;
	for (int i = 0; i < 4; i++)
	{
		if (a[i] > max2)
		{
			max1 = max2;
			max2 = a[i];
		}
		else if (a[i] > max1)
			max1 = a[i];
	}
	int w1 = max(a[0], a[1]);
	int w2 = max(a[2], a[3]);
	if ((w1 == max1 && w2 == max2) || (w1 == max2 && w2 == max1))
		return true;
	return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[4];
		for (int i = 0; i < 4; i++)
			cin >> a[i];
		if (isFair(a))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}