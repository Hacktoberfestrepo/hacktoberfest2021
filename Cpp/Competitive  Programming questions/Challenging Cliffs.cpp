// Question link : https://codeforces.com/contest/1537/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define fr1(i, a, n) for (ll i = a; i <= n; i++)
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        sort(h.begin(), h.end());

        if (n == 2)
        {
            cout << h[0] << " " << h[1] << "\n";
            continue;
        }

        int pos = -1, mn = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            if (mn > abs(h[i] - h[i - 1]))
            {
                pos = i;
                mn = abs(h[i] - h[i - 1]);
            }
        }

        for (int i = pos; i < n; i++)
        {
            cout << h[i] << " ";
        }
        for (int i = 0; i < pos; i++)
        {
            cout << h[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}