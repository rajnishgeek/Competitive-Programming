#include<bits/stdc++.h>
using namespace std;
#define d 1000000007
#define ll long long int

int main()
{
    int n, q;
    cin >> n;
    ll arrsum = 0;
    while (n--)
    {
        ll num;
        cin >> num;
        arrsum += num;
        arrsum = ((arrsum % d) + d) % d;
    }
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        arrsum += arrsum;
        arrsum = ((arrsum % d) + d) % d;
        cout << arrsum << endl;
    }
    return 0;
}
