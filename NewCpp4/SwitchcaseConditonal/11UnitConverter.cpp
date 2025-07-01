/*
11. Unit Converter :

Input: 1000 grams to kilograms
Output: 1 kilogram

Explanation:
The program converts units. For 1000 grams, the result is 1 kilogram, as 1000 grams equals 1 kilogram.

*/
#include <iostream>
using namespace std;

int main() {
    int choice;
    float input, result;

    cout << "Unit Converter Menu:\n";
    cout << "1. Grams to Kilograms\n";
    cout << "2. Kilograms to Grams\n";
    cout << "3. Meters to Kilometers\n";
    cout << "4. Kilometers to Meters\n";
    cout << "5. Centimeters to Meters\n";
    cout << "6. Meters to Centimeters\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> input;

    switch (choice) {
        case 1:
            result = input / 1000;
            cout << result << " Kilogram(s)" << endl;
            break;
        case 2:
            result = input * 1000;
            cout << result << " Gram(s)" << endl;
            break;
        case 3:
            result = input / 1000;
            cout << result << " Kilometer(s)" << endl;
            break;
        case 4:
            result = input * 1000;
            cout << result << " Meter(s)" << endl;
            break;
        case 5:
            result = input / 100;
            cout << result << " Meter(s)" << endl;
            break;
        case 6:
            result = input * 100;
            cout << result << " Centimeter(s)" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
