/*

12. Fruit Names :

Input: 2
Output: Banana

Explanation:
The program takes a number and outputs the corresponding fruit name. For input 2, the output is Banana
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (1-5): ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "Apple" << endl;
            break;
        case 2:
            cout << "Banana" << endl;
            break;
        case 3:
            cout << "Mango" << endl;
            break;
        case 4:
            cout << "Orange" << endl;
            break;
        case 5:
            cout << "Grapes" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
