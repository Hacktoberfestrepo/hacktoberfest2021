#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0;
    cin >> a >> b;
    int arr1[a], arr2[b], factor_elements=0;
    for(int i=0; i< a; i++)
        cin >> arr1[i];
    for(int i=0; i < b; i++)
        cin >> arr2[i];
    for(int factor=1; factor<= 100;factor++)
    {
        bool flag = true;
        for(int i=0;i<a;i++) if(factor%arr1[i]!=0) flag=false;
        for(int i=0;i<b;i++) if(arr2[i]%factor!=0) flag=false;
        if(flag) factor_elements++;
    }
    cout << factor_elements;
}
