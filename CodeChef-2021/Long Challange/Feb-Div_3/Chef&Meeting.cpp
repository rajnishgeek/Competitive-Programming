#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    string a[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    cout<<a[1][1]<<endl;
    return 0;
}*/

string isAvailable(string duration[], int n, string a)
{
	string res;
	if (n <= 0)
		return res;
	int hour, min;
	hour = a[0] - '0';
	hour *= 10;
	hour += a[1] - '0';
	min = a[3] - '0';
	min *= 10;
	min += a[4] - '0';
	for (int i = 0; i < n; i++)
	{
		int start_hour, start_min, end_hour, end_min;
		start_hour = duration[i][0] - '0';
		start_hour *= 10;
		start_hour += duration[i][1] - '0';

		start_min = duration[i][3] - '0';
		start_min *= 10;
		start_min += duration[i][4] - '0';

		end_hour = duration[i][10] - '0';
		end_hour *= 10;
		end_hour += duration[i][11] - '0';

		end_min = duration[i][13] - '0';
		end_min *= 10;
		end_min += duration[i][14] - '0';

		if (a[6] == 'P' && a[7] == 'M')
		{
			if ((duration[i][6] == 'A' && duration[i][7] == 'M') && (duration[i][16] == 'A' && duration[i][17] == 'M'))
			{
				if ((hour >= start_hour && min >= start_min) || (hour <= end_hour && min <= end_min))
					res.push_back(1);
				else
					res.push_back(0);
			}
			else if ((duration[i][6] == 'A' && duration[i][7]) && (duration[i][16] == 'A' && duration[i][17] == 'M'))
			{
				if ((hour >= start_hour && min >= start_min) || (hour <= end_hour && min <= end_min))
					res.push_back(1);
				else
					res.push_back(0);
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string p;
		cin >> p;
		int n;
		cin >> n;
		string duration[n];
		for (int i = 0; i < n; i++)
			cin >> duration[i];
		cout << isAvailable(duration, n, p) << endl;
	}
	return 0;
}
