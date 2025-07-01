/*
8. Modulo and Logical NOT:
Problem: Evaluate the following expression:
h = !(25 % 7 == 3) && (10 / 5 == 2);
Question: What is the value of h?
*/
#include<iostream>
using namespace std;
int main(){
   int h = !(25 % 7 == 3) && (10 / 5 == 2);
   cout<<h;
}
/*
(25 % 7 == 3)false
 (10 / 5 == 2)true
 f && t ->f
 !(false)=true;
*/