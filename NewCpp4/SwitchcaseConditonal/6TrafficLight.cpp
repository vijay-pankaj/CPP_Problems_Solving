/*
6. Traffic Signal :

Input: Green
Output: Go

Explanation:
The program checks the color of the traffic signal. If the signal is Green, it outputs Go; otherwise, it may output Stop or Get Ready.
*/
#include <iostream>
using namespace std;

int main() {
    char signal;
    cout << "Enter traffic signal (R for Red, Y for Yellow, G for Green): ";
    cin >> signal;

    switch (toupper(signal)) {
        case 'G':
            cout << "Go" << endl;
            break;
        case 'Y':
            cout << "Get Ready" << endl;
            break;
        case 'R':
            cout << "Stop" << endl;
            break;
        default:
            cout << "Invalid Signal" << endl;
    }

    return 0;
}
