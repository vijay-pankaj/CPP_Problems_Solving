/*
6. Check if a Number is Prime :
-> Task: Write a recursive function to check if a given number is prime.
*/
#include<iostream>
using namespace std;
bool isPrime(int n, int i = 2) {
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout <<"prime number." << endl;
    else
        cout << "not a prime number." << endl;

    return 0;
}