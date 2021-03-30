#include<bits/stdc++.h>
using namespace std;


char encoded[100000];
char letters[16] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

char getChar(int i, int j)
{
	int countbit = 1;
	int s = 0, e = 15;
	for (; i <= j; i++)
	{
		if (encoded[i] == '0')
		{
			if (countbit == 1)
				e = e - 8;
			else if (countbit == 2)
				e = e - 4;
			else if (countbit == 3)
				e = e - 2;
			else if (countbit == 4)
				e = e - 1;
		}
		else if (encoded[i] == '1')
		{
			if (countbit == 1)
				s = s + 8;
			else if (countbit == 2)
				s = s + 4;
			else if (countbit == 3)
				s = s + 2;
			else if (countbit == 4)
				s = s + 1;
		}
		countbit++;
	}
	return letters[s];
}
string decodedString(int n)
{
	string res;
	if (n <= 0)
		return res;


	for(int i = 0, j = 3;j < n && i<n ;i+=4,j+=4)
	{
		char ch = getChar(i, j);
		res.push_back(ch);
	}
	return res;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> encoded[i];
		cout << decodedString(n) << endl;
	}
	return 0;
}
