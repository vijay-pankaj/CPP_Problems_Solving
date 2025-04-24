#include <iostream>
using namespace std;
int x = 30;
int main() { 
    int x = 50; 
    cout << ::x;//30
    return 0;
}
// o/p 30