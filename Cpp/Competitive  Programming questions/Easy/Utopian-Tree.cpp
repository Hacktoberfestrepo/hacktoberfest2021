#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int arr[t];
    for(int k = 0; k < t; k++)
    {
       int h=1;
       cin >> n;
       for(int i = 1;i <= n;i++)
       {
           if(i%2==1)
               h=2*h;
           else
               h=h+1;
       }
        cout << h << '\n';
    }
}
