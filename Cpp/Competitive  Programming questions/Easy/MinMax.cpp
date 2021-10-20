#include <iostream>

using namespace std;

int main()
{
    int64_t size = 5, *arr, *sum, result[2]={INT64_MAX, 0};
    arr = new int64_t[size];
    sum = new int64_t[size];    
    
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
        sum[i]=0;        
    }
    
    for(int i=0;i<size;i++)
        for(int j=0; j <size ;j++)
            if(i != j)
                sum[i]+=arr[j];
                
    for(int i=0;i<size;i++)
    {
        if(sum[i] > result[1])
            result[1]=sum[i];
        if(sum[i] < result[0])
            result[0]=sum[i];
    }
    
    cout << result[0] << ' ' << result[1];
}
