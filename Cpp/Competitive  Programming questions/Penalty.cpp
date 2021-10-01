// Question link : https://codeforces.com/contest/1553/problem/C

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int ans = 9;
        {
            float t1 = 0, t2 = 0;
            for (int i = 0; i < 10; i++)
            {
                if (i % 2 == 0)
                { //team 1
                    if (s[i] != '0')
                        t1++;
                }
                else
                {
                    if (s[i] == '1')
                        t2++;
                }

                if (t1 > t2 + (10 - i) / 2)
                    ans = min(ans, i);
                if (t2 > t1 + (9 - i) / 2)
                    ans = min(ans, i);
            }
        }
        {
            float t1 = 0, t2 = 0;
            for (int i = 0; i < 10; i++)
            {
                if (i % 2 == 0)
                { //team 1
                    if (s[i] == '1')
                        t1++;
                }
                else
                {
                    if (s[i] != '0')
                        t2++;
                }

                if (t1 > t2 + (10 - i) / 2)
                    ans = min(ans, i);
                if (t2 > t1 + (9 - i) / 2)
                    ans = min(ans, i);
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}