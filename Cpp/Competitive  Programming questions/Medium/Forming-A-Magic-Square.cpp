#include <iostream>

using namespace std;

int main()
{
    // Pre computed matrices for magic matrices which contains
    // Rotations & Mirror images of the matrices
    // Hard Coded
    int magic_squares_combinations[8][3][3] = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };

    int A[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];
    }

    // Maximum cost of each matrix is 72
    // {1, 9} -> 9 - 1 = 8, For 9th index in a matrix ,8 * 9 = 72
    int min_cost = 72;
    for (int k = 0; k < 8; k++)
    {
        int current_cost = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                current_cost += abs( A[i][j] - magic_squares_combinations[k][i][j] );
        }
        if (current_cost < min_cost)
            min_cost = current_cost;
    }

    printf("%d", min_cost);
}
