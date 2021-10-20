#include <iostream>

using namespace std;

int main()
{
    // arrival time <= 0 Arrived on time
    // arrival time > 0 Arrived off time
    // if the threshold of students arrived on time then class will go on
    int t,n,k;
    cin >> t;
    string test_cases_result[t];
    for(int j=0; j< t; j++)
    {
        cin >> n >> k;
        int input, on_time=0;
        for(int i=0;i < n;i++)
        {
            cin >> input;
            if(input <= 0)
                on_time++;
        }
        if(on_time >= k)
            test_cases_result[j] = "NO";
        else
            test_cases_result[j] = "YES";
    }
    for(int j=0; j< t; j++)
    {
        cout << test_cases_result[j] << '\n';
    }
}
