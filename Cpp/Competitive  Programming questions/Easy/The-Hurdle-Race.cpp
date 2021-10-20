#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int input, max=0;
    for(int i=0; i< n;i++)
    {
        cin >> input;
        if(max < (input - k))
            max = input - k;
    }
    cout << max;
}
