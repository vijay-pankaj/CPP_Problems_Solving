/*
18. Currency Denomination :
Input: 20
Output: Twenty Rupees
Explanation:
The program takes an integer input representing the currency denomination and outputs
 its corresponding name. For example, 20 corresponds to Twenty Rupees.
*/
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter currency denomination (10, 20, 50, 100, 200, 500, 2000): ";
    cin >> amount;

    switch (amount) {
        case 10:
            cout << "Ten Rupees" << endl;
            break;
        case 20:
            cout << "Twenty Rupees" << endl;
            break;
        case 50:
            cout << "Fifty Rupees" << endl;
            break;
        case 100:
            cout << "One Hundred Rupees" << endl;
            break;
        case 200:
            cout << "Two Hundred Rupees" << endl;
            break;
        case 500:
            cout << "Five Hundred Rupees" << endl;
            break;
        case 2000:
            cout << "Two Thousand Rupees" << endl;
            break;
        default:
            cout << "Invalid or Unsupported Denomination" << endl;
    }

    return 0;
}
