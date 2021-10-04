#include <iostream>
using namespace std;
#include <stack>
#include <vector>

int main() {
  int n=7;
  cout << "Enter number of elements: ";
  cin >> n;
  //int arr[7] = {6,2,5,4,1,5,6};
  int arr[n];
  cout << "Enter the elements of array in the histogram: ";
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  int ps[n];
  stack <int> s;
  s.push(0);
  ps[0] = -1;
  int a;
  for(int i=1;i<n;i++)
  {
    while(s.empty()==false && arr[s.top()]>=arr[i])
    {
      s.pop();
    }
    if(s.empty() == true)
    {
      ps[i] = -1;
    }
    else
    {
      ps[i] = s.top();
    }
    s.push(i);
  }
  /*for(int i=0;i<n;i++)
  {
    cout << ps[i] << " ";
  }
  cout <<  endl;*/

  int ns[n];
  stack <int> s1;
  s1.push(n-1);
  ns[n-1] = n;
  for(int i=n-2;i>=0;i--)
  {
    while(s1.empty()==false && arr[s1.top()]>=arr[i])
    {
      s1.pop();
    }
    if(s1.empty() == true)
    {
      ns[i] = n;
    }
    else
    {
      ns[i] = s1.top();
    }
    s1.push(i);
  }
  /*for(int i=0;i<n;i++)
  {
    cout << ns[i] << " ";
  }*/


  
  int maxarea=0;
  for(int i=0;i<n;i++)
  {
    int area=0;
    area += arr[i];
    area += ((ns[i]-i-1)*arr[i]);
    area += ((i-ps[i]-1)*arr[i]);
    
    //cout << i << " " << area << endl;
    maxarea = max(maxarea,area);
  }
  cout << endl << maxarea << endl;
}
