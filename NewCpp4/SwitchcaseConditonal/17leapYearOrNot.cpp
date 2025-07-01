/*
17. Leap Year or Not :

Input: 2024
Output: Leap Year

Explanation:
The program checks if the given year is a leap year by using a switch statement and outputs Leap Year if it is.
*/
// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << "Enter year: ";
//     cin >> year;

//     // Determine leap year status in advance: 1 = Leap Year, 0 = Not Leap Year
//     int isLeap;

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//         isLeap = 1;
//     else
//         isLeap = 0;

//     switch (isLeap) {
//         case 1:
//             cout << "Leap Year" << endl;
//             break;
//         case 0:
//             cout << "Not a Leap Year" << endl;
//             break;
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    int flag = 0;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        flag = 1;

    switch (flag) {
        case 1:
            cout << "Leap Year" << endl;
            break;
        case 0:
            cout << "Not a Leap Year" << endl;
            break;
    }

    return 0;
}
