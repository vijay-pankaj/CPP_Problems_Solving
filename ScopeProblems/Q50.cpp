#include <iostream>
using namespace std;
int main() { 
    int sum = 0;
    for (int i = 1; i <= 10; i++) { 
        sum += i * i;// 0+1*1, 1+2*2, 5+3*3, 14+4*4, 30+5*5, 55+6*6, 91+7*7, 140+8*8, 204+9*9 ,285+10*10 = 385
    }
    cout << sum;//385
    return 0;
}
