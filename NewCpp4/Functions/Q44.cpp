/*
14. Check Whether a Number is Divisible by 7: Write a function that checks if a number is divisible by 5 and 7.
Input: 35
Output: Divisible by 3 and 7
*/
#include <iostream>
using namespace std;

void checkDivisibility(int n) {
    if (n % 5 == 0 && n % 7 == 0)
        cout << "Divisible by 5 and 7" << endl;
    else
        cout << "Not divisible by both 5 and 7" << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkDivisibility(num);

    return 0;
}
