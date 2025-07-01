/*
4. Subtraction and Multiplication:
Problem: Evaluate the following expression:
d = 10 - 3 * 2;
Question: What is the value of d?

*/

#include<iostream>
using namespace std;
int main(){
    int d = 10 - 3 * 2;
    cout<<d;//4
}
/*
* (multiplication) has higher precedence than - (subtraction)

First: 3 * 2 -> 6
Then: 10 - 6 -> 4
*/