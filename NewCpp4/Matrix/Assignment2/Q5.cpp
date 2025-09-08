/*
5: Finding Eigenvalues of a Matrix
-> Problem: Write a program to find the eigenvalues of a matrix.
-> Input: Matrix:
	A = { {2, 1}, {1, 2} }
-> Output: 
	Eigenvalues:
	Eigenvalues(A) = {3, 1}
*/
/*
|A - λI| = 0
For a 2x2 matrix:
If

makefile
Copy
Edit
A = | a  b |
    | c  d |
Then characteristic equation is:

Copy
Edit
λ² − (a + d)λ + (ad − bc) = 0
*/
#include <iostream>
#include <cmath>
using namespace std;

void findEigenvalues(int A[2][2]) {
    int a = A[0][0];
    int b = A[0][1];
    int c = A[1][0];
    int d = A[1][1];

    int trace = a + d;
    int determinant = a * d - b * c;

    int discriminant = trace * trace - 4 * determinant;

    cout << "Eigenvalues:\n";
    if (discriminant < 0) {
        cout << "Complex eigenvalues (not real numbers).\n";
    } else {
        double root1 = (trace + sqrt(discriminant)) / 2.0;
        double root2 = (trace - sqrt(discriminant)) / 2.0;

        cout << "Eigenvalues(A) = { " << root1 << ", " << root2 << " }" << endl;
    }
}

int main() {
    int A[2][2] = {
        {2, 1},
        {1, 2}
    };

    findEigenvalues(A);
    return 0;
}
