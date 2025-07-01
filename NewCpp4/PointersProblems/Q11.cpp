/*
11. Pointer Arithmetic with Multiple Variables 
Create three integer variables a, b, and c.
 Declare a pointer ptr and use pointer arithmetic to set it first to point to a, then to b, and finally to c. 
 Print the values pointed to by the pointer. 
*/
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    int arr[] = {a, b, c};

    int* ptr = arr;

    cout << "Value pointed to by ptr (a): " << *ptr << endl;
    ptr++;
    cout << "Value pointed to by ptr (b): " << *ptr << endl;
    ptr++;
    cout << "Value pointed to by ptr (c): " << *ptr << endl;

    return 0;
}
