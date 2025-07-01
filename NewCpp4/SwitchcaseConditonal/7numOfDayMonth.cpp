/*
7. Number of Days in a Month :
Input: 2
Output: 28 or 29 days
Explanation:
The program checks the month number and returns the number of days. 
February (month 2) can have either 28 or 29 days depending on whether it’s a leap year.
*/
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 or 29 days" << endl;
            break;
        default:
            cout << "Invalid month number" << endl;
    }

    return 0;
}
