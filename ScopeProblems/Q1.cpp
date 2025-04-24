#include <iostream>
using namespace std;
int x = 10;
void fun() { 
    int x = 20;
    cout << x << " ";
}
int main() { 
    fun(); //20
    cout << x;//10
    return 0;
}
//O/p 20 10