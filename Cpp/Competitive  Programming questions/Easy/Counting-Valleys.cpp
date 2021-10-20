#include <iostream>

using namespace std;

int main()
{
  int n, number_of_valleys_traversed = 0, sea_level_balance = 0;
  cin >> n;
  char path[n];
  bool isInValley = false;
  for(int i=0; i<n; i++)
  {
    cin >> path[i];

    (path[i] == 'D') ? (sea_level_balance--) : (sea_level_balance++);

    if (sea_level_balance < 0 && !isInValley)
    {
        isInValley = true;
    }
    if (sea_level_balance == 0 && isInValley)
    {
        number_of_valleys_traversed++;
        isInValley = false;
    }
  }
  cout << number_of_valleys_traversed;
}

