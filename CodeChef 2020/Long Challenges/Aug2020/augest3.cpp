#include<bits/stdc++.h>
using namespace std;
/*
void countDigits(int value, int &digit)
{
	while (value > 0)
	{
		if (value <= 9)
		{
			digit++;
			return;
		}
		else
		{
			value -= 9;
			digit++;
		}
	}
}
void printWinnerAndDigits(int pc, int pr)
{
	int pc_digit_counter = 0, pr_digit_counter = 0;
	countDigits(pc, pc_digit_counter);
	countDigits(pr, pr_digit_counter);
	pc_digit_counter < pr_digit_counter ? cout << "0  " << pc_digit_counter : cout << "1  " << pr_digit_counter;
}
*/

void printWinnerAndDigits(int pc, int pr)
{
	if((pc/10==0 && pr/10==0) && (pc<10 && pr<10))
    {
        cout<<"1  "<<"1";
        return;
    }
    if((pc/10==0 && pr/10!=0) && (pc<10 && pr>9))
    {
        cout<<"0  "<<"1";
        return;
    }
    if((pc/10!=0 && pr/10==0) && (pc>9 && pr<10))
    {
        cout<<"1  "<<"1";
        return;
    }
    pc=(int)ceil(pc/9.0);
    pr=(int)ceil(pr/9.0);
	pc<pr  ? cout << "0  " <<pc : cout << "1  " << pr;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int pc, pr;
		cin >> pc >> pr;
		printWinnerAndDigits(pc, pr);
		cout << endl;
	}
	return 0;
}
