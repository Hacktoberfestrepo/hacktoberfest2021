#include <iostream>

using namespace std;

typedef long long LL;

int main()
{
    LL n, k;
    LL v[50000], dp[50000];

    cin >> n >> k;
    for(LL i = 1; i <= n; i++)
        cin >> v[i];

    for(LL i = 1; i <= n; i++)
        dp[i] = 1LL << 60;

    for(LL i = 1; i <= n; i++)
        dp[min(i + k, n)] = min(dp[min(i + k, n)], dp[max(i - k - 1, 0LL)] + v[i]);

    LL ans = dp[n];
    cout << ans;

    return 0;
}