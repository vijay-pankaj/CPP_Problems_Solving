#include <iostream>
using namespace std;
int x = 10;  // Global variable

void func() {
    int x = 20;  // Local variable
    cout << x << " ";
}

int main() {
    func();//20
    cout << x;//10
    return 0;
}
//o/p 20 10