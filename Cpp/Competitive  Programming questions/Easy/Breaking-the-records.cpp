#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  long int scores[n], minmum[n], maximum[n], count_min=0, count_max=0, latest_minimum=INT64_MAX, latest_maximum=INT64_MIN;
  for(int i=0; i<n;i++)
  {
    cin >> scores[i];
    if(scores[i] > latest_maximum)
    {
      latest_maximum = scores[i];
    }
    if(scores[i] < latest_minimum)
    {
      latest_minimum = scores[i];
    }
    maximum[i] = latest_maximum;
    minmum[i] = latest_minimum;
  }
  for(int i=1; i<n;i++)
  {
    if(maximum[i-1] != maximum[i])
      count_max++;
    if(minmum[i-1] != minmum[i])
      count_min++;
  }
  cout << count_max << ' ' << count_min << '\n';
}

