#include <iostream>
using namespace std;

void extractSubmatrix(int A[3][3]) {
    cout << "Submatrix:\n";
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    extractSubmatrix(A);

    return 0;
}
