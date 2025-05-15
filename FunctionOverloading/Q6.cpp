// 6. Implement overloaded functions to concatenate two strings, two characters, and a string with a character
#include <bits/stdc++.h>
using namespace std;
string concatenate(string a, string b)
{
    return a + b;
}

string concatenate(char a, char b)
{
    return string(1, a) + b;
}

string concatenate(string a, char b)
{
    return a + b;
}

int main()
{
    cout << concatenate("Hello, ", "World!") << endl;
    cout << concatenate('A', 'B') << endl;
    cout << concatenate("Test", '!') << endl;
    return 0;
}