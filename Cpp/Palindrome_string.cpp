//check if an entered string is palindrome or not

#include <iostream>
using namespace std;

int main()
{
    cout<<"enter lenght of string and word"<<endl;
    int n;
    cin>>n;
    
    char arr[n+1];
    
    cin>>arr;
    int check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    
if(check==1)
{
    cout<<"word is a palindrome"<<endl;
}
else
{
    cout<<"word is not a palindrome"<<endl;
}
    return 0;
}
