/*
10.  Pointer Decrement :
Declare an integer variable x and a pointer ptr pointing to it. 
Perform a decrement on the pointer and then print the pointer's value and the variable's value.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;

    cout << "Before decrement:" << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;

    ptr--;

    cout << "\nAfter decrement:" << endl;
    cout << "Pointer address: " << ptr << endl;

  
    cout << "Value at decremented pointer: " << *ptr<< endl;

    cout << "\nOriginal variable x: " << x << endl;

    return 0;
}
