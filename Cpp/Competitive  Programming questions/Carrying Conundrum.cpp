// Question link : https://codeforces.com/contest/1567/problem/C

#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = int(1e9);
#define PI 3.141592653589793238462
#define ll long long int
#define lld long double
#define ull unsigned long long int
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define fr1(i, a, n) for (ll i = a; i <= n; i++)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

void solve()
{
    string s, s1, s2, s3;
    cin >> s;
    ll a = 0, b = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            s1 += s[i];
        }
        else
        {
            s2 += s[i];
        }
    }
    a = stoi(s1);
    if (!s2.empty())
        b = stoi(s2);

    cout << ((a + 1) * (b + 1)) - 2 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}