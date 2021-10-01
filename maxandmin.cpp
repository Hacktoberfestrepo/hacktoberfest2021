//using struct approach
//using stl's approach

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n], i, max, min;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else if (min > arr[i])
            min = arr[i];
    }

    cout << "Largest element : " << max << endl;
    cout << "Smallest element : " << min;
    return 0;
}