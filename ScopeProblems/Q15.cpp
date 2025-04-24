#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20, c = 5;
    if (a > b) {
        if (a > c) 
            cout << "A is largest";
        else 
            cout << "C is largest";
    } else {
        if (b > c) 
            cout << "B is largest";
        else 
            cout << "C is largest";
    }
    return 0;
}
//o/p B is largest