#include <iostream>
using namespace std;
int main() {
    int num = -5;
    string result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
    cout << result;
    return 0;
}
// o/p Negative