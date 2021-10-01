// Question link :  https://codeforces.com/contest/1559/problem/C

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
    ll arr[n];
    ll flag = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll c = 0;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] == 1 && arr[i - 1] == 0)
        {
            for (ll k = 0; k < i; k++)
            {
                cout << k + 1 << " ";
            }
            cout << n + 1 << " ";
            for (ll j = i; j < n; j++)
            {
                cout << j + 1 << " ";
            }
            cout << endl;
            c = 1;
            flag = 1;
            return;
        }
    }

    if (arr[0] == 1 && flag == 0)
    {
        cout << n + 1 << " ";
        for (ll i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
        flag = 1;
        return;
    }
    if (flag == 0 && arr[n - 1] == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << n + 1 << " ";
        cout << endl;
        flag = 1;
        return;
    }
    {
        cout << "-1" << endl;
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