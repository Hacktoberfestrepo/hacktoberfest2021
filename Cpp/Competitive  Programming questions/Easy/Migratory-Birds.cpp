#include <iostream>

using namespace std;

int n,birds[10];

int main()
{
    cin >> n;
    int x;
    for (int i=1; i <= n; i++)
     cin >> x, birds[x]++;
    int ans = 1;
    for (int i=2; i <= 5; i++)
        if (birds[i] > birds[ans])
         ans = i;
    cout << ans;
}
