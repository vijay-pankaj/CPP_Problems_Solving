#include <iostream>
using namespace std;

void calculator(int a, int b, char op) {
    switch (op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << (float)a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}

int main() {
    int num1, num2;
    char op;

    cout << "num1 and num2 and Operator: ";
    cin >> num1 >> num2 >> op;

    calculator(num1, num2, op);

    return 0;
}
