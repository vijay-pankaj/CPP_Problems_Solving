// 43. Write a C++ function that takes a four-digit number as input and uses nested if-else statements to determine 
// if it is a palindrome and if its digits form an arithmetic progression.

#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string number) {
    int n = number.length();
    for (int i = 0; i < n / 2; i++) {
        if (number[i] != number[n - 1 - i]) {
            return "Not palindrome";
        }
    }
    return "Palindrome";
}

int main() {
    string number;
    cout << "Enter four digit number: ";
    cin >> number;

    cout << isPalindrome(number);
    return 0;
}