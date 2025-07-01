/*
7. Arithmetic Inside Logical Expression:
Problem: Evaluate the following expression:
g = (5 + 3) * 2 > 15 || 12 / 4 == 3;
Question: What is the value of g?
*/
#include<iostream>
using namespace std;
int main(){
   int g = (5 + 3) * 2 > 15 || 12 / 4 == 3;
   cout<<g;
}
/*
(5 + 3) * 2 = 8 * 2 = 16
12 / 4 = 3
16 > 15 -> true  1
3 == 3 -> true  1
1 || 1 -> true  1
*/