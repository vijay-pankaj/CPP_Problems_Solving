#include <iostream>
using namespace std;
int x = 10;
void fun() { 
    int x = 20;
    cout << x << " ";
}
int main() { 
    cout << x << " "; //10
    fun();//20
    return 0;
}
//o/p 10 20