#include <iostream>
using namespace std;
int a = 5;

void modify() {
    a += 10;
}

int main() {
    cout << a << " ";//5
    modify();//15
    cout << a;//15
    return 0;
}
//o/p 5 15