/*
10. Shape Based on Sides :

Input: 4
Output: Quadrilateral

Explanation:
The program takes the number of sides and outputs the corresponding shape name.
 For example, 4 sides form a quadrilateral.
 */
#include <iostream>
using namespace std;

int main() {
    int sides;
    cout << "Enter number of sides (3-10): ";
    cin >> sides;

    switch (sides) {
        case 3:
            cout << "Triangle" << endl;
            break;
        case 4:
            cout << "Quadrilateral" << endl;
            break;
        case 5:
            cout << "Pentagon" << endl;
            break;
        case 6:
            cout << "Hexagon" << endl;
            break;
        case 7:
            cout << "Heptagon" << endl;
            break;
        case 8:
            cout << "Octagon" << endl;
            break;
        case 9:
            cout << "Nonagon" << endl;
            break;
        case 10:
            cout << "Decagon" << endl;
            break;
        default:
            cout << "Shape not recognized or unsupported number of sides." << endl;
    }

    return 0;
}
