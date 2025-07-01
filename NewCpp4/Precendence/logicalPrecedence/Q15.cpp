/*
15. Double Negation:
Problem: Evaluate the following expression:
o = !!(15 % 5 == 0) && (10 - 3 < 8);
Question: What is the value of o?
*/
#include<iostream>
using namespace std;
int main(){
int o = !!(15 % 5 == 0) && (10 - 3 < 8);
   cout<<o;
}
/*

15 % 5 = 0 -> 0 == 0 -> true -> 1
10 - 3 = 7 -> 7 < 8 -> true -> 1
!!(1) -> 1 
1 && 1 -> true -> 1
*/