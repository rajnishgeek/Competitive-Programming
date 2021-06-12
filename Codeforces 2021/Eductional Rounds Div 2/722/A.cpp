#include<bits/stdc++.h>
using namespace std;


int maximumDeletion(vector<int> &arr)
{
	if (arr.size() <= 1)
		return 0;
	int count = 0;
	while (true)
	{
		unordered_map<int, int> m;
		int sum = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i]!=0 && m.count(arr[i])==0)
			{
				sum += arr[i];
				m[arr[i]] = i;
			}
		}
		if (m.size() <= 1)
			break;

		int value = sum / m.size();

		for (auto it = m.begin(); it != m.end(); it++)
		{
			if (it->first > value)
			{
				arr[it->second]=0;
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << maximumDeletion(arr) << endl;
	}
	return 0;
}
