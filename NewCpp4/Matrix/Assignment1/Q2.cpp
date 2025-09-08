/*
2: Multiplication of Matrices

-> Problem: Write a program to multiply two matrices of size 3x3 and display the result.

-> Input: Two matrices:
    A = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }
    B = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} }

-> Output:
    Product of matrices:
    Result = { {30, 24, 18}, {84, 69, 54}, {138, 114, 90} }
*/
/*

A =             B = {
 {
{1, 2, 3},     {9, 8, 7},
{4, 5, 6},     {6, 5, 4},
{7, 8, 9}      {3, 2, 1}
}               }
*/
#include <iostream>
using namespace std;
void inputMatrix(int **arr, int row, int col)
{
    cout << "Enter elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
}

void printmatrix(int **arr, int row, int col)
{
    cout << "matrix is:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplicationOfTwoMatrix(int **arr1, int **arr2, int row, int col)
{
    int result[3][3]={0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // for arr1
    int row;
    cout << "Enter number of row for arr1: ";
    cin >> row;

    int col;
    cout << "Enter number or column for arr1: ";
    cin >> col;

    // input arr1
    int **arr1 = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr1[i] = new int[col];
    }
    inputMatrix(arr1, row, col);

    printmatrix(arr1, row, col);

    int row2;
    cout << "Enter number of row for arr2: ";
    cin >> row2;

    int col2;
    cout << "Enter number or column for arr2: ";
    cin >> col2;

    // input arr1
    int **arr2 = new int *[row2];
    for (int i = 0; i < row; i++)
    {
        arr2[i] = new int[col2];
    }

    inputMatrix(arr2, row2, col2);

    printmatrix(arr2, row2, col2);

    multiplicationOfTwoMatrix(arr1, arr2, row, col);
}