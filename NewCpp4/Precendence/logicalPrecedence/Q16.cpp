/*
16. Mixing Arithmetic and Logical Operators:
Problem: Evaluate the following expression:
p = (20 / 2 == 10) && !(10 % 3 == 1) || (5 + 5 > 10);
Question: What is the value of p?
*/
#include<iostream>
using namespace std;
int main(){
int p = (20 / 2 == 10) && !(10 % 3 == 1) || (5 + 5 > 10);
   cout<<p;
}
/*
20 / 2 = 10 → 10 == 10 → true → 1
10 % 3 = 1 → 1 == 1 → true → 1, so !(1) → false → 0
5 + 5 = 10 → 10 > 10 → false → 0
(1 && 0) → 0
 0 || 0 → 0
*/