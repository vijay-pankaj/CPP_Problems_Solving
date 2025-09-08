/*
5: Finding Inverse of a Matrix
-> Problem: Write a program to find the inverse of a 2x2 matrix.
-> Input: Matrix:
	A = { {4, 7}, {2, 6} }
-> Output:
	Inverse of matrix A:
	Inverse(A) = { {0.6, -0.7}, {-0.4, 0.5} }
*/
#include <iostream>
#include <iomanip>
using namespace std;

void inverseOfMatrix(int arr[2][2]) {
    float det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);

    if (det == 0) {
        cout << "Determinant is Zero. Inverse Not Possible" << endl;
        return;
    }

    int a = arr[0][0];
    int b = arr[0][1];
    int c = arr[1][0];
    int d = arr[1][1];

    float inv[2][2];
    inv[0][0] =  d / det;
    inv[0][1] = -b / det;
    inv[1][0] = -c / det;
    inv[1][1] =  a / det;

    cout << fixed << setprecision(1);
    cout << "Determinant: " << det << endl;

    cout << "Inverse of matrix A:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << inv[i][j];
        }
        cout << endl;
    }
}

int main() {
    int arr[2][2] = {{4, 7}, {2, 6}};
    inverseOfMatrix(arr);
}
