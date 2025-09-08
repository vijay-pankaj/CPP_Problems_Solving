/*

10. Sum of Squares of Digits of a Number :

-> Task: Write a recursive function to compute the sum of squares of digits of a given number.
*/

#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;
    return (digit * digit) + sumOfSquares(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = sumOfSquares(num);
    cout << "Sum of squares of digits of "<< result << endl;

    return 0;
}
