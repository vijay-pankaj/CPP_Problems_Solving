/*
4: Determinant of a Matrix

-> Problem: Write a program to find the determinant of a 3x3 matrix.

-> Input: Matrix:
A =  {{1, 2, 3},
	 {4, 5, 6}, 
	 {7, 8, 9} }

-> Output: 
	Determinant of matrix A:
	Determinant(A) = 0
*/
#include<iostream>
using namespace std;

void deterMinantOfMatrix(int arr[3][3]){
	int determinant=0;
	 determinant=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]))
	               -arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2]))
				   +arr[0][2]*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]));
				   cout<<determinant;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
	deterMinantOfMatrix(arr);

}