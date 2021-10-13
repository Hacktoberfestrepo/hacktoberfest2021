#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[low++], v[mid++]);
        }
        else if (v[mid] == 1)
            mid++;
        else if (v[mid] == 2)
            swap(v[mid], v[high--]);
    }
    cout << "Sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}

/*
sort the arrays of 0's 1's and 2's using 3 pointers
Tc: O(n)
Sc: O(1) 
*/
