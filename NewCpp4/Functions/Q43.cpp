/*
13. Area of Circle: Write a function to calculate the area of a circle given its radius.
Input: 5
Output: Area: 78.54 (approximately)
*/
#include <iostream>9
using namespace std;

float areaOfCircle(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;

    float area = areaOfCircle(r);
    cout << "Area: " << area << endl;

    return 0;
}
