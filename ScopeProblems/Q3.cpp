#include <iostream>
using namespace std;
void fun() { 
    static int x = 0; 
    x++; 
    cout << x << " ";
}
int main() { //*with static 1 2 3 ; withot static 1 1 1
    fun(); //1
    fun(); //2
    fun(); //3
    return 0;
}
//o/p 1 2 3