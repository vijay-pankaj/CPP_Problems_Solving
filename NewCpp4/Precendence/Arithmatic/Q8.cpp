/*
8. Multiple Operators:
Problem: Evaluate the following expression:
h = 10 + 6 / 2 * 3 - 4;
Question: What is the value of h?
*/
#include<iostream>
using namespace std;
int main(){
    int h = 10 + 6 / 2 * 3 - 4;
    cout<<h;
}
/*
Division:
6 / 2 -> 3

Multiplication:
3 * 3 -> 9

Expression becomes:
h = 10 + 9 - 4;

Addition:
10 + 9 -> 19

Subtraction:
19 - 4 -> 15
*/