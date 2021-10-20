#include <iostream>

using namespace std;

// Feburary only month with variable days
// 29 days during leap year, 28 days during others
// Now we need to determine leap year in the two calendars

int main()
{
    int year, days = 215, programmersDay = 256;
    cin >> year;
    string month = "09";
    bool leap=false;
    if(year < 1918)
    {
        if(year%4 == 0)
            leap = true;
        else
            leap = false;
    }
    else if(year == 1918)
    {
        days+=29;
        int dayForMonth = programmersDay - days;
        dayForMonth += 14;
        cout << dayForMonth << '.' << month << '.' << year;
        return 0;
    }
    else
    {
        if( year % 400 == 0)
        {
            leap = true;
        }
        else if(year % 4 == 0 &&  year % 100 != 0)
        {
            leap = true;
        }
        else {
            leap = false;
        }
    }
    if(leap)
    {
        days+=29;
        int dayForMonth = programmersDay - days;
        cout << dayForMonth << '.' << month << '.' << year;
    }
    else
    {
        days+=28;
        int dayForMonth = programmersDay - days;
        cout << dayForMonth << '.' << month << '.' << year;
    }
}

