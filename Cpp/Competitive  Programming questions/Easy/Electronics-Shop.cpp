#include <iostream>

using namespace std;

int main()
{
    int b,n,m;
    cin >> b >> n >> m;
    int keyboards[n], drives[m];
    for(int i=0; i< n;i++)
        cin >> keyboards[i];

    for(int i=0; i< m;i++)
        cin >> drives[i];

    int max = -1, sum =0;
    for(int i=0; i < n;i++)
    {
        for(int j=0; j< m;j++)
        {
            sum = keyboards[i] + drives[j];
            if(max < sum && sum <= b)
                max = sum;
        }
    }
    cout << max;

}
