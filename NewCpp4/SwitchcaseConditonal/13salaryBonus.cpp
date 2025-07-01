/*

13. Salary Bonus :

Input: 5
Output: 50% Bonus

Explanation:
The program uses a switch-case to determine the bonus percentage based on performance. A rating of 5 corresponds to a 50% bonus.
*/
#include <iostream>
using namespace std;

int main() {
    int rating;
    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    switch (rating) {
        case 5:
            cout << "50% Bonus" << endl;
            break;
        case 4:
            cout << "40% Bonus" << endl;
            break;
        case 3:
            cout << "30% Bonus" << endl;
            break;
        case 2:
            cout << "20% Bonus" << endl;
            break;
        case 1:
            cout << "10% Bonus" << endl;
            break;
        default:
            cout << "Invalid rating! Please enter a value between 1 and 5." << endl;
    }

    return 0;
}
