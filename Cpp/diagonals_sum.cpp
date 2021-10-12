#include <iostream>
using namespace std;

int main ()
    {
 		int a[10][10];
        int i, j, r, c, sum2 = 0, sum1 = 0;
 
        cout<<"\n Enter the no. of rows in matrix : ";
        cin>>r;
		cout<<"\n Enter the no. of columns in matrix : ";
		cin>>c;
 
        if (r == c ) 
        {
 
            cout<<"\n Enter the elements of the matrix \n";
            for (i = 0; i < r; ++i)
            {
                for (j = 0; j < c; ++j)
                {
                	cout << " Enter element a" << i + 1 << j + 1 << " : ";
                    cin>>a[i][j];
                }
            }
            
 			cout<<endl;
            cout<<"\n The entered matrix is : ";
            for (i = 0; i < r; ++i) 
            {
            	cout<<"\n";
                for (j = 0; j <c; ++j)
                {
                    cout<<" "<<a[i][j];
                }
            }
 
            for (i = 0; i <r; ++i) 
            {
                sum1 = sum1 + a[i][i];
                sum2 = sum2 + a[i][r - i - 1];
            }
 			cout<<endl;
 			
            cout<<"\n The sum of the elements in diagonal 1 is : "<<sum1;
            cout<<"\n The sum of the elements in diagonal 2 is : "<<sum2;
 
        }
 
        else
            cout<<"\n The given order is not square matrix (i.e. row is not equal to column ) !!";
 
    }

