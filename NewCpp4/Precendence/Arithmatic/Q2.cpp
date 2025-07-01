/*
2. Division vs. Multiplication:
Problem: Evaluate the following expression:
b = 10 / 2 * 3;
Question: What is the value of b?
*/
#include<iostream>
using namespace std;
int main(){
      int b = 10 / 2 * 3;
    cout<<b;//15
}
/*
/ (division) and * (multiplication) have same precedence
Associativity is left to right

First: 10 / 2 -> 5
Then: 5 * 3 -> 15


*/