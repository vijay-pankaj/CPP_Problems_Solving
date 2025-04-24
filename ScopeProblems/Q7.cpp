#include <iostream>
using namespace std;
int x = 25;
void fun() { 
    cout << x << " ";
}
int main() { 
    int x = 50; 
    fun();//25
    return 0;
}
// o/p 25