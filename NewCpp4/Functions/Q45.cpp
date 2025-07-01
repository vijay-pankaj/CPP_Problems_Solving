/*
15. Find the Largest Digit in a Number: Write a function that returns the largest digit in a given number.
Input: 2538
Output: Largest digit: 8
*/
#include <iostream>
using namespace std;

int findLargestDigit(int n) {
    int maxDigit = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        n /= 10;
    }

    return maxDigit;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largest = findLargestDigit(num);
    cout << "Largest digit: " << largest << endl;

    return 0;
}
