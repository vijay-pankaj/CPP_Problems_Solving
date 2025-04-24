#include <iostream>
using namespace std;
int main() { 
    int i = 0;
    while (true) { 
        cout << i << " "; 
        if (i == 5) 
            break;
        i++;
    }
    return 0;
}
// o/p  0 1 2 3 4 5 