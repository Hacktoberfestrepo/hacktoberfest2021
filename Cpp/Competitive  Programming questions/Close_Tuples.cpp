// Question link :- https://codeforces.com/contest/1462/problem/E2

#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

ll mod = (ll)1e9 + 7;
int N = (int)2e5;

vector<int>fact, inv, inv_fact;

void preprocess()
{
    fact.resize(N);
    inv.resize(N);
    inv_fact.resize(N);
    fact[0] = fact[1] = 1;
    inv[0] = inv[1] = 1;
    inv_fact[0] = inv_fact[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fact[i] = (ll)fact[i - 1] * i % mod;
        inv[i] = (ll)inv[mod % i] * (mod - mod / i) % mod;
        inv_fact[i] = (ll)inv_fact[i - 1] * inv[i] % mod;
    }
    return;
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    return ((ll)fact[n] * inv_fact[r] % mod) * inv_fact[n - r] % mod;
}

int main()
{
    fastio();
    preprocess();
    int T;
    cin>>T;
    while(T--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i <= n - m; i++)
        {
            int max_possible = v[i] + k;
            int j = upper_bound(v.begin(), v.end(), max_possible) - v.begin();
            if (j >= n)
                j = n - 1;
            if (v[j] > max_possible)
                j--;
            int len = j - i; // No of elements that can be chosen with min element as v[i]
            ans = (ans + nCr(len, m - 1)) % mod; // choose m - 1 elements out of the possible elements
        }
        cout<<ans<<'\n';
    }
    return 0;
}