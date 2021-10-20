#include <iostream>

using namespace std;

int main()
{
  int n, d, m, segements = 0;
  cin >> n;
  int arr[n];
  for(int i=0;i<n; i++)
    cin >> arr[i];
  cin >> d >> m;
  for(int i=0; i<n; i++)
  {
    int sum =0;
    for(int j=0;j<m;j++)
    {
      sum+=arr[i+j];
    }
    if(sum == d)
      segements++;
  }
  cout << segements;
}
