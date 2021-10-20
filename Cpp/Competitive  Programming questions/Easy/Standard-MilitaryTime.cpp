#include <iostream>

using namespace std;

int main() {
  string time;
  int hour;
  cin >> time;
  hour = ((time[0] - '0') * 10) + (time[1] - '0');
  if (time[8] == 'P' && hour == 12)
    cout << to_string(hour);
  else if (time[8] == 'P')
    cout << to_string(hour + 12);
  else if (time[8] == 'A' && hour == 12)
    cout << "00";
  else cout << time[0] << time[1];

  for (int i = 2; i < 8; i++)
    cout << time[i];
  cout << endl;
  return 0;
}
