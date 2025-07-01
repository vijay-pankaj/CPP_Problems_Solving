/*
2. Logical OR with Modulo:
Problem: Evaluate the following expression:
b = 15 % 4 == 3 || 10 / 2 == 4;
Question: What is the value of b?
*/

#include<iostream>
using namespace std;
int main(){
   int b = 15 % 4 == 3 || 10 / 2 == 4;
   cout<<b;
}
/*
15 % 4 = 3

10 / 2 = 5

15 % 4 == 3 → 3 == 3 → true → 1

10 / 2 == 4 → 5 == 4 → false → 0

1 || 0 → true → 1
*/