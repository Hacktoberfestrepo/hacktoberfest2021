// Question link : https://codeforces.com/contest/1574/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline "\n"
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{

#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio();

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    ll m;
    cin >> m;
    for (ll q = 0; q < m; q++)
    {
        ll d, at;
        cin >> d >> at;
        ll ans = 2e18;
        ll s = sum;
        ll p = lower_bound(a.begin(), a.end(), d) - a.begin();

        if (p > 0)
        {
            ans = max(0ll, at - (s - a[p - 1])) + min(ans, d - a[p - 1]);
        }
        if (p < n)
        {
            ans = min(ans, max(0ll, at - (s - a[p])));
        }

        cout << ans << nline;
    }

    return 0;
}