//C++ program with class Matrix and write operations for Read, Show and Transpose of Matrix.

#include<iostream>

using namespace std;

class matrix
{
    private:
        int a[50][50], b[50][50], cols, rows;

    public:
        void read()
        {
            cout<<"Enter no. of rows in the matrix : ";
            cin>>rows;
            cout<<"Enter no. of columns in the matrix : ";
            cin>>cols;

            cout<<"Enter matrix elements :\n";
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                    cin>>a[i][j];
                }
                cout<<"\n";
            }
        }

        void transpose();

        void show()
        {
            cout<<"The matrix is :\n ";
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
        }

};

void matrix::transpose()
{
    
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<cols;++j)
        {
            b[j][i]=a[i][j];
        }
    }

    cout<<"Transposed matrix is : \n";
    for(int i=0;i<cols;++i)
    {
        for(int j=0;j<rows;++j)
        {
            cout<<b[i][j]<<" ";
            if (j == rows - 1)
            {
                cout<<"\n";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    matrix m1;
    m1.read();

    int ch;

    do
    {
        cout<<"Enter your choice :\n1.Display\n2.Transpose\n3.EXIT\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                m1.show();
                break;
            
            case 2:
                m1.transpose();
                break;

            case 3:
                cout<<"*****EXIT*****";
                break;

            default:
                cout<<"~~~~~Wrong choice enter again~~~~~";
        }
    }while(ch!=3);

    return 0;
}