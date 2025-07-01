/*

19. Car Brands :

Input: 1
Output: Tesla

Explanation:
The program takes a number (1-5) as input and outputs the corresponding car brand name. For example, input 1 corresponds to Tesla.
*/
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Tesla" << endl;
            break;
        case 2:
            cout << "BMW" << endl;
            break;
        case 3:
            cout << "Mercedes-Benz" << endl;
            break;
        case 4:
            cout << "Toyota" << endl;
            break;
        case 5:
            cout << "Hyundai" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
