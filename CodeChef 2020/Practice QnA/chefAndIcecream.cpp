#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void isSellAllIcecream(int a[], int n)
{
	int count5 = 0, count10 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 5 && !count5 && !count10)
		{
			cout << "NO";
			return;
		}
		else if (a[i] == 5)
			count5++;
		else if (a[i] == 10)
		{
			if (count5 != 0)
			{
				count10++;
				count5--;
			}
			else
			{
				cout << "NO";
				return;
			}

		}
		else if (a[i] == 15)
		{
			if (count10 != 0)
				count10--;
			else if (count5 >= 2)
				count5 = count5 - 2;
			else
			{
				cout << "NO";
				return;
			}
		}
	}
	cout << "YES";
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		isSellAllIcecream(arr, n);
		cout << endl;
	}
	return 0;
}
