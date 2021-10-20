#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    for(int i=0; i< n;i++)
    {
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    int count_sort[max+1];
    for(int i=0; i< max+1;i++)
        count_sort[i]=0;
    for(int i=0; i< n;i++)
        count_sort[arr[i]]++;
    int number_of_pairs=0;
    for(int i=0; i< n;i++)
    {
        if(count_sort[arr[i]]%2 ==0)
            number_of_pairs+=count_sort[arr[i]]/2;
        else
            number_of_pairs+=(count_sort[arr[i]]-1)/2;
        count_sort[arr[i]] = 0;
    }
    cout << number_of_pairs;
}

