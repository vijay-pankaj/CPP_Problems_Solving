#include <iostream>
using namespace std;
int main() {
    int temp = 35;
    if (temp < 0 || temp > 30) 
        cout << "Extreme Weather";
    else 
        cout << "Normal Weather";
    return 0;
}
// o/p Extreme Weather