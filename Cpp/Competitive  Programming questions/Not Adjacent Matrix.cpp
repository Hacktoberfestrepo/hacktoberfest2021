// Question link : https://codeforces.com/contest/1520/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define fr1(i, a, n) for (ll i = a; i <= n; i++)
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << "-1" << endl;
        return;
    }
    ll arr[n][n];
    ll num = 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (!((i + j) & 1))
            { // i + j is even
                arr[i][j] = num;
                num++;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if ((i + j) & 1)
            { // i + j is odd
                arr[i][j] = num;
                num++;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}