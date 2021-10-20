#include <iostream>

using namespace std;

int main()
{
    // n represents number of items, k represents index which anna didn't eat
    int n, k, b;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i < n;i++)
        cin >> arr[i];
    cin >> b;
    int sum =0;
    for(int i=0;i<n;i++)
    {
        if(i != k)
            sum+=arr[i];
    }
    sum/=2;
    if(b == sum)
        cout << "Bon Appetit";
    else
        cout << b - sum;
}
