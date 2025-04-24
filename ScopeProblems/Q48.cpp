#include <iostream>
using namespace std;
int main() { 
    for (int i = 1; i <= 10; i++) { 
        if (i % 2 == 0) 
            continue;
        cout << i << " ";
    }
    return 0;
}
//o/p 1 3 5 7 9 