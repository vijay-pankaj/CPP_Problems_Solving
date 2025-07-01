/*
6. Nested Parentheses with Logical Operators:
Problem: Evaluate the following expression:
f = ((10 > 5) && (3 * 2 == 6)) || (20 / 5 < 3);
Question: What is the value of f?
*/
#include<iostream>
using namespace std;
int main(){
   int f = ((10 > 5) && (3 * 2 == 6)) || (20 / 5 < 3);
   cout<<f;
}
/*
10 > 5 → true → 1
3 * 2 = 6, so 3 * 2 == 6  true  1
20 / 5 = 4, so 4 < 3  false  0
(1 && 1)  1
1 || 0  1
*/