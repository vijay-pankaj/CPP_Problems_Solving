/*
2: Checking Symmetry of a Matrix
-> Problem: Write a program to check if a given matrix is symmetric.
-> Input: Matrix:
	A = { {1, 2, 3}, {2, 5, 6}, {3, 6, 9} }
-> Output: 
	Symmetry check:
	The matrix is not symmetric.
*/
#include <iostream>
using namespace std;

bool isSymmetric(int matrix[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    cout << "Symmetry check:\n";
    if (isSymmetric(A, 3)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
