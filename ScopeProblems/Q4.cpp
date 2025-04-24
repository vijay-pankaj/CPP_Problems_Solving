#include <iostream>
using namespace std;
int x = 100;
void fun() { 
    int x = 50; 
    cout << x << " ";
}
int main() { 
    cout << x << " "; 
    fun();
    return 0;
}
// o/p 100 50