/*
9. Combining Relational and Modulo:
Problem: Evaluate the following expression:
i = (15 % 4) != 3;
Question: What is the value of i?
*/
#include<iostream>
using namespace std;
int main(){
    int i = (15 % 4) != 3;
    cout<<i;
}
//15%4->3
//is 3 != 3 false (0)