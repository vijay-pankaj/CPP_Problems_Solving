/*
8. Season of the Year :
Input: 5
Output: Spring
Explanation:
The program checks the month and outputs the corresponding season. 
Month 5 corresponds to May, which is in the Spring season.
*/
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 3: case 4: case 5:
            cout << "Spring" << endl;
            break;

        case 6: case 7: case 8:
            cout << "Summer" << endl;
            break;

        case 9: case 10: case 11:
            cout << "Autumn" << endl;
            break;

        case 12: case 1: case 2:
            cout << "Winter" << endl;
            break;

        default:
            cout << "Invalid month number" << endl;
    }

    return 0;
}
