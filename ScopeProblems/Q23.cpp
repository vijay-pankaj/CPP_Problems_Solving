#include <iostream>
using namespace std;
int main() {
    int num = 15;
    if (num > 0) {
        if (num % 2 == 0) 
            cout << "Positive Even";
        else 
            cout << "Positive Odd";
    } else {
        cout << "Non-Positive";
    }
    return 0;
}
// o/p Positive Odd