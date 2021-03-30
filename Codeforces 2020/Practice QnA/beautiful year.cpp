#include<iostream>
using namespace std;
void uniqueYear(int year)
{
    int digit1,digit2,digit3,digit4,uniqueyear=0;
    int i=++year;
    while(year)
    {
        uniqueyear=i;
        digit4=i%10;
        i/=10;
        digit3=i%10;
        i/=10;
        digit2=i%10;
        i/=10;
        digit1=i;
        if(digit1!=digit2 && digit1!=digit3 && digit1!=digit4 && digit2!=digit3 && digit2!=digit4 && digit3!=digit4)
            break;
        else
        {
            i=uniqueyear;
            i++;
        }
    }
    cout<<uniqueyear<<endl;
}
int main()
{
    int year;
    cin>>year;
    uniqueYear(year);
    return 0;

}
