/*
6. Relational with Logical OR:
Problem: Evaluate the following expression:
f = (5 != 10) || (15 < 5);
Question: What is the value of f?
*/
#include<iostream>
using namespace std;
int main(){
    int f = (5 != 10) || (15 < 5);
    cout<<f;
}
// (5 != 10) is 5 not equal to 10 true
//(15 < 5)is 15 less than five false
//true||false in oR condition any one true so final o/p is true