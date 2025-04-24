#include <iostream>
using namespace std;
int main() {
    int score = 85;
    if (score >= 90 && score <= 100) 
        cout << "Excellent";
    else if (score >= 75 || score == 85) 
        cout << "Good";
    else 
        cout << "Average";
    return 0;
}
// o/p Good