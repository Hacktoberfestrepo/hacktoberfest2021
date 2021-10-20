#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d;
    d.push_back(1);
    
    for (int i = 2; i <= n; ++i) {
        for (auto it = d.begin(); it != d.end(); ++it)
            *it *= i;
        
        for (size_t j = 0; j < d.size(); ++j)
         {
            if (d[j] < 10)
                continue;

            if (j == d.size() - 1)
                d.push_back(0);
            
            d[j + 1] += d[j] / 10;
            d[j] %= 10;
        }
    }

    for (auto it = d.rbegin(); it != d.rend(); ++it)
        cout << *it;
    
    return 0;
}