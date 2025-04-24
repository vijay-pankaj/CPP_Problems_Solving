#include <iostream>
using namespace std;
int main() {
    int x = 15, y = 10, z = 20;
    if (x > y && x > z) 
        cout << "X is largest";
    else if (y > x && y > z) 
        cout << "Y is largest";
    else 
        cout << "Z is largest";
    return 0;
}
// o/p Z is largest