#include <iostream>
using namespace std;
int main() {
    int x = 10, y = 5;
    if (x > y) 
        if (x % y == 0) 
            cout << "Divisible";
        else 
            cout << "Not Divisible";
    else 
        cout << "Invalid";
    return 0;
}
// o/p Divisible