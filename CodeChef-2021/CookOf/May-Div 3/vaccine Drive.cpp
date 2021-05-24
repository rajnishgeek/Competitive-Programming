#include<bits/stdc++.h>
using namespace std;

void vaccineDrive(int arr[], int g, int p)
{
	int minDay = 0, maxDay = 0, before_g = 0;
	for (int i = g; i < 10; i++)
		before_g += arr[i];
	auto dayNumber = [&](int people) {
		return (people / p + (people % p != 0));
	};
	minDay = dayNumber(before_g + 1);
	maxDay = dayNumber(before_g + arr[g - 1]);

	cout << minDay << "  " << maxDay;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int g, p, arr[10];
		cin >> g >> p;
		for (int i = 0; i < 10; i++)
			cin >> arr[i];
		vaccineDrive(arr, g, p);
		cout << endl;
	}
	return 0;
}
