#include <stack>
#include <iostream>
using namespace std;

int main(){
  unsigned long n, m, i, input;
  cin >> n;
  stack<unsigned long> scores;
  for (i = 0; i < n; ++i) {
    cin >> input;
    if (scores.empty() || scores.top() != input)
        scores.push(input);
  }
  cin >> m;
  for (i = 0; i < m; ++i) {
    cin >> input;
    while (!scores.empty() && input >= scores.top())
        scores.pop();
    cout << (scores.size() + 1) << endl;
  }
  return 0;
}
