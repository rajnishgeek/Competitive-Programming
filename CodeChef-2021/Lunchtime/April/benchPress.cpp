#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPossible(ll arr[], ll n, ll atLeastweight, ll rodweight)
{
    if (atLeastweight <= rodweight)
        return true;
    //first is element, second is freqency of element
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
        ++m[arr[i]];

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
        {
            rodweight += 2 * ((it->second) / 2) * (it->first);
            if (rodweight >= atLeastweight)
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, atLeastweight, rodweight;
        cin >> n >> atLeastweight >> rodweight;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        if (isPossible(arr, n, atLeastweight, rodweight))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
