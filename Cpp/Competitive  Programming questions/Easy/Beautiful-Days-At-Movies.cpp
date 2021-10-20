#include <iostream>

using namespace std;

int main()
{
    int number_of_inputs = 2;
    string first_day = "20", end_day="23";
    int result, beautiful_days = 0, k=6;
    cin >> first_day >> end_day;
    cin >> k;
    for(int i=stoi(first_day); i <= stoi(end_day); i++)
    {
        string reversed_input = "", input = to_string(i);
        for(int j = input.length()-1; j >= 0; j--)
            reversed_input+=input[j];
        result = abs(stoi(input) - stoi(reversed_input));
        if(result%k==0)
            beautiful_days++;
    }
    cout << beautiful_days;
}

