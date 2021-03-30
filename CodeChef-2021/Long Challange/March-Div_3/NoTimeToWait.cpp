#include <bits/stdc++.h>
using namespace std;
bool timeRequired(int a[], int n, int h, int x)
{
    if (n == 0)
        return false;
    if (h <= x)
        return true;
    int find = h - x;
    for (int i = 0; i < n; i++)
        if (a[i] == find)
            return true;
    return false;
}
int main()
{
    int N, H, x;
    cin >> N >> H >> x;
    int timezones[N];
    for (int i = 0; i < N; i++)
        cin >> timezones[i];
    if (timeRequired(timezones, N, H, x))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}