/*
16. Type of Triangle :

Input: 90 45 45
Output: Right-angled Triangle

Explanation:
The program uses three angle values to determine the type of triangle. If one of the angles is 90 degrees, it’s a right-angled triangle.
*/
#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    
    if (angle1 + angle2 + angle3 != 180 || angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        cout << "Invalid Triangle" << endl;
    } 
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        cout << "Right-angled Triangle" << endl;
    } 
    else if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
        cout << "Acute-angled Triangle" << endl;
    } 
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        cout << "Obtuse-angled Triangle" << endl;
    } 
    else {
        cout << "Unknown type" << endl;
    }

    return 0;
}
