#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		long sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum / n == 1 && sum % n == 0)
			cout << "0" << endl;
		else if (sum < n)
			cout << "1" << endl;
		else
			cout << sum - n << endl;
	}
	return 0;
}