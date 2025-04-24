#include <iostream>
using namespace std;
int x = 5;
void fun() { 
    x += 10;
}
int main() {
    cout << x << " ";//5
    fun();//15
    cout << x;//15
    return 0;
}
//o/p 5 15