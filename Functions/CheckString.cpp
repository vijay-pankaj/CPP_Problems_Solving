// Develop a C++ function that takes a string as an argument and returns whether it contains only digits using if-else statements.
#include<bits/stdc++.h>
using namespace std;
bool containsOnlyDigits( string & str) {
    if (str.empty()) {
        return false;
    }

    for (char ch : str) {
        if (ch >= '0' && ch <= '9') {
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (containsOnlyDigits(input)) {
        cout << "The string contains only digits." <<endl;
    } else {
        cout << "The string does not contain only digits." <<endl;
    }

    return 0;
}