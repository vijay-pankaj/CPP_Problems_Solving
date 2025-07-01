/*
9. Zodiac Sign :

Input: 4
Output: Cancer

Explanation:
The program uses a switch case to match the number (1–12) to a zodiac sign.
 Here, 4 corresponds to Cancer.
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (1-12): ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "Aries" << endl;
            break;
        case 2:
            cout << "Taurus" << endl;
            break;
        case 3:
            cout << "Gemini" << endl;
            break;
        case 4:
            cout << "Cancer" << endl;
            break;
        case 5:
            cout << "Leo" << endl;
            break;
        case 6:
            cout << "Virgo" << endl;
            break;
        case 7:
            cout << "Libra" << endl;
            break;
        case 8:
            cout << "Scorpio" << endl;
            break;
        case 9:
            cout << "Sagittarius" << endl;
            break;
        case 10:
            cout << "Capricorn" << endl;
            break;
        case 11:
            cout << "Aquarius" << endl;
            break;
        case 12:
            cout << "Pisces" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
