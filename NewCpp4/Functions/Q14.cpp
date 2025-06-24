/*
14. Check Triangle Validity: Write a function that checks if three sides can form a valid triangle.
Input: 3 4 5
Output: Valid Triangle
*/
#include <iostream>
using namespace std;

bool checkTriangleValidity(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) return true;
         else return false;
}

int main() {
    int a, b, c;
    cout << "Enter 3 sides: ";
    cin >> a >> b >> c;

    if(checkTriangleValidity(a, b, c))cout<<"Valid Triangle";
    else cout<<"Invalid Triangle";

    return 0;
}
