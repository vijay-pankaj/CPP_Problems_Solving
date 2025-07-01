/*
8. Find Maximum of Three Numbers Using Operators: Write a function that returns the largest of three numbers using only conditional operators.
Input: 5 8 3
Output: Maximum: 8
*/

#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int max = a;

    (b > max) && (max = b);
    (c > max) && (max = c);

    return max;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Maximum: " << maxOfThree(x, y, z) << endl;
    return 0;
}
