#include <iostream>

using namespace std;

struct Pair
{
    int a, b;
};

int main()
{
    int n, k, count_pairs=0;
    cin >> n >> k;
    int arr[n];
    Pair pairs[n*n];
    for(int i=0; i< n;i++)
        cin >> arr[i];
    for(int i=0; i< n;i++)
        for(int j=0; j<n;j++)
            if(i != j)
            {
                if(((arr[i]+arr[j])%k) == 0)
                {
                    bool flag = false;
                    for(int k=0; k<count_pairs;k++)
                    {
                        if(i == pairs[k].b && j ==pairs[k].a)
                            flag = true;
                    }
                    if(!flag)
                    {
                        pairs[count_pairs].a = i;
                        pairs[count_pairs].b = j;
                        count_pairs++;
                    }
                }
            }
    cout << count_pairs;
}

