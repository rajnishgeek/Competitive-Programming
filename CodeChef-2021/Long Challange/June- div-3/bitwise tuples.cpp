#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		cout << (((pow(2, n) - 1) % mod) ^ m) % mod << endl;
	}
	return 0;
}
