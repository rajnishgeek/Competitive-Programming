#include<bits/stdc++.h>
using namespace std;
#define player1 1
#define player2 2

int nimSum(int a[], int n)
{
	int i, nimsum = a[0];
	for (i = 1; i < n; i++)
		nimsum = nimsum ^ a[i];
	return nimsum;
}
void printWinner(int a[], int n, int first)
{

	if (nimSum(a, n) != 0)
	{
		if (first == player1)
			cout << "First";
		else
			cout << "Second";
	}
	else
	{
		if (first == player1)
			cout << "Second";
		else
			cout << "First";
	}
	return;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		printWinner(a, n, player1);
		cout << endl;
	}
	return 0;
}