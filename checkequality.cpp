#To check for equality of two numbers without using arithmetic or comparison operator

#include<iostream>
using namespace std;
int main(){
   int a = 132;
   int b = 132;
   if ( (a ^ b) )
      cout<<"a is not equal to b";
   else
      cout<<"a is else to b";
      return 0;
}
