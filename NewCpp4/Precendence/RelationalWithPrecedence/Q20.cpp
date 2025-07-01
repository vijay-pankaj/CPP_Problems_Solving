/*
20. Challenging Relational Expression:
Problem: Evaluate the following expression:
t = (10 > 5) && !(3 + 2 <= 5) || (15 - 10 == 5);
Question: What is the value of t?
*/
#include<iostream>
using namespace std;
int main(){
    int t = (10 > 5) && !(3 + 2 <= 5) || (15 - 10 == 5);
    cout<<t;
}
/*
(10 > 5)true
!(3 + 2 <= 5)->!(true)->false
(15 - 10 == 5)true
T && F->F
F||T=T
*/