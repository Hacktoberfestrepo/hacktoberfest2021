#include <iostream>

using namespace std;

int main()
{
    int n, k ,q;
    cin >> n >> k >> q;
    k%=q;
    int arr[n];
    for(int i=0; i< n;i++)
        cin >> arr[i];
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        cout<<arr[(n-k+query)%n]<<"\n";
    }
}

