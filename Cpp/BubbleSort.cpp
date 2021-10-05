/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort(int A[],int n){
    int i,j,flag;
    for( i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1])
            swap(&A[j],&A[j+1]);
            flag=1;
        }if(flag==0)
        break;
    }
}


int main()
{
  int A[]={2,4,7,1,3,9,0,4};
  int n = sizeof(A)/sizeof(A[0]);
  cout<<"Before Sorting-";
  for(int i=0;i<n;i++){
      cout<<A[i];
  }
  cout<<endl;
  BubbleSort(A,n);
  cout<<"After Sorting-";
  for(int i=0;i<n;i++){
      cout<<A[i];
  }

    return 0;
}
