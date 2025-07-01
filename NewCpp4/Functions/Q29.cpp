/*
14. Print Pyramid of Stars: Write a function that prints a pyramid pattern of stars.

      *
    * * * 
  * * * * *
* * * * * * *
*/
#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    printPyramid(rows);

    return 0;
}
