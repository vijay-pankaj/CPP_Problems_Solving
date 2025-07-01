/*
1. Logical AND with Arithmetic:

Problem: Evaluate the following expression:
a = (5 + 3) > 6 && (2 * 4) < 10;
Question: What is the value of a?
*/

#include<iostream>
using namespace std;
int main(){
   int a = (5 + 3) > 6 && (2 * 4) < 10;
   cout<<a;
}

/*
(5 + 3) = 8
(2 * 4) = 8
(8 > 6) -> true -> 1
(8 < 10) -> true -> 1
1 && 1 -> true -> 1
*/