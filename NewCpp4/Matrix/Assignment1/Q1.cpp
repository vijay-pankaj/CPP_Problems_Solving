/*

1: Addition of Matrices

-> Problem: Write a program to add two matrices of size 3x3 and display the result.

-> Input: Two matrices:
    A = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }
    B = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} }

-> Output:
    Sum of matrices:
    Result = { {10, 10, 10}, {10, 10, 10}, {10, 10, 10} }
*/

/*
A = { {1, 2, 3},  B = { {9, 8, 7},
    {4, 5, 6},          {6, 5, 4},
    {7, 8, 9} }         {3, 2, 1} }

*/
#include <iostream>
using namespace std;

void printMatrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void AdditionOfTwoMAtrix(int arr1[][3], int arr2[][3], int row, int col)
{
    int result[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printMatrix(result, 3, 3);
}

int main()
{
    cout << "Matrix A: " << endl;
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printMatrix(arr1, 3, 3);
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    cout << "Matrix B: " << endl;
    printMatrix(arr2, 3, 3);

    AdditionOfTwoMAtrix(arr1, arr2, 3, 3);
}