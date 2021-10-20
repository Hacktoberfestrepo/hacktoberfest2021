#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int values[n];
    for(int i=0; i< n;i++)
    {
        cin >> values[i];
    }
    for(int i=0; i< n;i++)
    {
        if(values[i] < 38)
        {
            cout << values[i] << '\n';
        }
        else
        {
            int j=0, roundValue=0;
            while(true)
            {
                roundValue = values[i] + j;
                if((roundValue % 5) == 0)
                {
                    if (roundValue - values[i] < 3)
                    {
                        cout << roundValue << '\n';
                        break;
                    }
                    else {
                        cout << values[i] << '\n';
                        break;
                    }
                }
                j++;
            }
        }
    }
}
