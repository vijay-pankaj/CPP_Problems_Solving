/*
12. Complex Relational Expression:
Problem: Evaluate the following expression:
l = (10 + 2 >= 12) && (15 % 5 == 0);
Question: What is the value of l?
*/
#include<iostream>
using namespace std;
int main(){
    int l = (10 + 2 >= 12) && (15 % 5 == 0);
    cout<<l;
}
//(10 + 2 >= 12) 12 is not greater than 12 but 12 is equal to 12 so true;
// (15 % 5 == 0) rem is 0 so 0==0 true 
//both are true T&&T->T