/*
7. Nested Parentheses:
Problem: Evaluate the following expression:
g = ((8 + 2) * 3 - 6) / 2;
Question: What is the value of g?
*/
#include<iostream>
using namespace std;
int main(){
    int g = ((8 + 2) * 3 - 6) / 2;
    cout<<g;//12
}
/*
Innermost parentheses:
8 + 2 -> 10

So now:
g = (10 * 3 - 6) / 2;

Multiplication:
10 * 3 -> 30

g = (30 - 6) / 2;

Subtraction:
30 - 6 -> 24

g = 24 / 2;

Division:
24 / 2 -> 12
*/