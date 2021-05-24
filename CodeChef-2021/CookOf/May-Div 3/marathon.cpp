#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int D, d, A, B, C;
		cin >> D >> d >> A >> B >> C;
		d = d * D;
		if (d >= 42)
			cout << C << endl;
		else if (d >= 21)
			cout << B << endl;
		else if (d >= 10)
			cout << A << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}