/*
3: Transpose of a Matrix
-> Problem: Write a program to find the transpose of a matrix (3x3).
-> Input: Matrix:
	A = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }
-> Output:
	Transpose of matrix A:
	Transpose(A) = { {1, 4, 7}, {2, 5, 8}, {3, 6, 9} }
*/
#include<iostream>
using namespace std;

void inputmatrix(int **arr, int row, int col)
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

void transposeMatrix(int **arr,int row,int col){
    int result[3][3]={};
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           result[j][i] = arr[i][j];
        }
    }
    cout << " result matrix is:" << endl;
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
    cout << "Enter number of row for arr1: ";
    cin >> row;

    int col;
    cout << "Enter number or column for arr1: ";
    cin >> col;
     int **arr=new int *[row];
     for(int i=0; i<row; i++){
        arr[i]=new int [col];
     }
    inputmatrix(arr,row,col);
    printmatrix(arr,row,col);
    transposeMatrix(arr,row,col);
}