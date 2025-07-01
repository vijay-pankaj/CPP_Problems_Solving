/*
14. Educational Degrees :

Input: 2
Output: M.Tech

Explanation:
The program uses a number input to output a corresponding degree. Here, 2 corresponds to M.Tech.
*/
#include <iostream>
using namespace std;

int main() {
    int degreeCode;
    cout << "Enter a number (1-5): ";
    cin >> degreeCode;

    switch (degreeCode) {
        case 1:
            cout << "B.Tech" << endl;
            break;
        case 2:
            cout << "M.Tech" << endl;
            break;
        case 3:
            cout << "BCA" << endl;
            break;
        case 4:
            cout << "MCA" << endl;
            break;
        case 5:
            cout << "Ph.D" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
