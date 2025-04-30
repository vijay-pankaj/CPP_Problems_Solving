// Write a C++ function that takes a person's weight and height as arguments and returns their Body Mass Index (BMI) 
// category (Underweight, Normal weight, Overweight, Obese) using if-else statements.

// if your height is in foot then covert it in meter and enter;
#include <iostream>
using namespace std;

string bmiCheck(float height, float weight) {
    float bmi = weight / (height * height);

    if (bmi < 18.5) {
        return "You are Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        return "You have Normal weight";
    } else if (bmi >= 25 && bmi <= 29.9) {
        return "You are Overweight";
    } else {
        return "You are Obese.";
    }
}

int main() {
    float height, weight;

    cout << "Enter your height in meters and weight in kg: ";
    cin >> height >> weight;

    if (height <= 0 || weight <= 0) {
        cout << "Enter valid height or weight.";
        return 1;
    }

    string finalReport = bmiCheck(height, weight);
    cout << finalReport << endl;

    return 0;
}
