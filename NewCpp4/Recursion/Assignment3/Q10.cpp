#include <iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main() {
    double x;
    int n;
    cout << "Enter base: ";
    cin >> x;
    cout << "Enter exponent: ";
    cin >> n;

    cout <<power(x, n) << endl;
    return 0;
}
