#include <bits/stdc++.h>
using namespace std;

int isSafe(int **arr, int x, int y, int n)
{
    //check for column
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    // for easy we are declaring variable
    int row = x;
    int col = y;

    //check for upper right diagonal
    while (row >= 0 && col <= n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    //reintialixing
    row = x;
    col = y;
    //check for upper left diagonal
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
//not taking y because we will not check for the same row

int nQueen(int **arr, int x, int n)
{

    //we have placed all the queens
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            //now check for the other rows for queen placing
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }

            arr[x][col] = 0; //backtracking step if any one was found false
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}