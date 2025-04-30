// Write a C++ function that takes a temperature in Fahrenheit as an argument and returns its equivalent in Celsius, 
// with additional messages if it is freezing or boiling using if-else statements
#include <iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    if (celsius <= 0) {
        cout << "It's freezing!" << endl;
    } else if (celsius >= 100) {
        cout << "It's boiling!" << endl;
    } else {
        cout << "The temperature is moderate." << endl;
    }

    return celsius;
}

int main() {
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    fahrenheitToCelsius(fahrenheit);

    return 0;
}
