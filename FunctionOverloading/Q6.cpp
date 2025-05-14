// 6. Implement overloaded functions to concatenate two strings, two characters, and a string with a character
#include<bits/stdc++.h>
using namespace std;
string concatenate(string a, string b) {
    return a + b;
}

string concatenate(char a, char b) {
    return string(1, a) + b;
}

string concatenate(string a, char b) {
    return a + b;
}

int main() {
    cout << "String + String: " << concatenate("Hello, ", "World!") << endl;
    cout << "Char + Char: " << concatenate('A', 'B') << endl;
    cout << "String + Char: " << concatenate("Test", '!') << endl;
    return 0;
}