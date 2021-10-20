#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max_value = -1;
    for(int i=0; i< n;i++)
    {
        cin >> arr[i];
        if(max_value < arr[i])
            max_value = arr[i];
    }
    int count_sort[max_value+1];

    for(int i=0; i <= max_value;i++)
    {
        count_sort[i] = 0;
    }

    for(int i=0; i< n;i++)
    {
        count_sort[arr[i]]++;
    }

    int max_instances = 0;
    for(int i=1; i<= max_value;i++)
    {
        max_instances = max(max_instances, (count_sort[i-1]+count_sort[i]));
    }
    cout << max_instances;
}

