/*

15. Planet Facts :

Input: 3
Output: Earth is the only planet known to support life.

Explanation:
The program uses a number (1–8) to represent planets and output facts about them. Here, input 3 refers to Earth.
*/
#include <iostream>
using namespace std;

int main() {
    int planetNumber;
    cout << "Enter planet number (1-8): ";
    cin >> planetNumber;

    switch (planetNumber) {
        case 1:
            cout << "Mercury is the closest planet to the Sun." << endl;
            break;
        case 2:
            cout << "Venus has a thick, toxic atmosphere and is the hottest planet." << endl;
            break;
        case 3:
            cout << "Earth is the only planet known to support life." << endl;
            break;
        case 4:
            cout << "Mars is known as the Red Planet and may have once had water." << endl;
            break;
        case 5:
            cout << "Jupiter is the largest planet in the solar system." << endl;
            break;
        case 6:
            cout << "Saturn is famous for its beautiful rings." << endl;
            break;
        case 7:
            cout << "Uranus rotates on its side and has a blue-green color due to methane." << endl;
            break;
        case 8:
            cout << "Neptune is the farthest planet from the Sun and has strong winds." << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 8." << endl;
    }

    return 0;
}
