/*
9. Complex Logical Expression:
Problem: Evaluate the following expression:
i = (10 - 3 > 5 && 15 % 4 == 3) || (8 * 2 == 16 && 20 / 4 == 5);
Question: What is the value of i?
*/
#include<iostream>
using namespace std;
int main(){
int i = (10 - 3 > 5 && 15 % 4 == 3) || (8 * 2 == 16 && 20 / 4 == 5);
   cout<<i;
}
/*
(T && T) ||(T&&T)
o/p=T

*/