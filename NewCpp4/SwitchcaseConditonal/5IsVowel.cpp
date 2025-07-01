/*
5. Vowel or Consonant :
Input: e
Output: Vowel
*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }

    return 0;
}
