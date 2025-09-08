/*
1: Scalar Multiplication of a Matrix
-> Problem: Write a program to perform scalar multiplication on a matrix.
-> Input: Matrix:
	A = { {1, 2}, {3, 4} }
	Scalar = 3
-> Output:
	Scalar multiplication result:
	Result = { {3, 6}, {9, 12} }
*/
#include<iostream>
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
void scalerMultiplication(int **arr,int row,int col,int scalar){
      int result[2][2];
 for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = arr[i][j] * scalar;
        }
    }
    cout << "matrix is after scaler: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
     }
}
int main(){
    int row;
    cout<<"Enter number of row: ";
    cin>>row;

    int col;
    cout<<"enter number of col";
    cin>>col;
    int **arr=new int*[row];for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    int scalar=3;
    inputMatrix(arr, row, col);

    printmatrix(arr, row, col);

    scalerMultiplication(arr,row,col,scalar);

 }