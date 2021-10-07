#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(string exp){
  stack<int> st;
  for (int i = 0; exp[i]; ++i){
    // If the scanned character is an operand (number here), push it to the stack.
    if (isdigit(exp[i]))  
      st.push(exp[i] - '0');  
    // If the scanned character is an operator, pop two elements from stack apply the operator
    else{  
      int val2 = st.top();
      st.pop();  
      int val1 = st.top();
      st.pop();  
      switch (exp[i])  {  
        case '+': st.push( val1 + val2); break;  
        case '-': st.push( val1 - val2); break;  
        case '*': st.push( val1 * val2); break;  
        case '/': st.push( val1/val2); break;  
      }  
    }  
  }  
  return st.top(); 
}

int main(){
  string exp = "632+7*+";
  cout<<"Value of "<<exp<<" postfix expression is "<<evaluatePostfix(exp);
}
