// 13. Implement overloaded functions to find the absolute value of an integer, a float, and a double.
#include<bits/stdc++.h>
using namespace std;


#include <iostream>
using namespace std;

int absolute(int num) {
    return (num < 0) ? -num : num;
}

float absolute(float num) {
    return (num < 0.0f) ? -num : num;
}

double absolute(double num) {
    return (num < 0.0) ? -num : num;
}

int main() {
    int i = -10;
    float f = -5.75f;
    double d = -3.14159;

    cout << "Absolute value of int: " << absolute(i) << endl;
    cout << "Absolute value of float: " << absolute(f) << endl;
    cout << "Absolute value of double: " << absolute(d) << endl;

    return 0;
}