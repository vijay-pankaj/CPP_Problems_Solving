/*
20. Festival Names :
Input: 1
Output: Diwali
Explanation:
The program takes a number input (1–5) and outputs the corresponding festival name. For example, input 3 corresponds to the festival Eid
*/
#include <iostream>
using namespace std;

int main() {
    int festivalNumber;
    cout << "Enter a number (1-5): ";
    cin >> festivalNumber;

    switch (festivalNumber) {
        case 1:
            cout << "Diwali" << endl;
            break;
        case 2:
            cout << "Holi" << endl;
            break;
        case 3:
            cout << "Eid" << endl;
            break;
        case 4:
            cout << "Christmas" << endl;
            break;
        case 5:
            cout << "Navratri" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
