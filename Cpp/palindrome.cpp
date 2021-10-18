#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(int x) {
       string s=to_string(x);
        string c=s;
        int left=0,right=s.size()-1;
        while(left<right){
            char n=c[left];
            c[left]=c[right];
            c[right]=n;
            left++;
            right--;
        }
        if(c==s){
            return true;
        }
        return false;
    }
int main()
{
  string s;
  cout<<"Enter string : ";
  cin>>s;
  cout<<isPalindrome(s)<<endl;
  return 0;
}
