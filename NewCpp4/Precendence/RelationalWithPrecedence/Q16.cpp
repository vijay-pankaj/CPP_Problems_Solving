/*
16. Relational Chaining with Variables:
Problem: Evaluate the following expression:
int a = 5, b = 10, c = 15;
p = a < b && b < c;
Question: What is the value of p?
*/
#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10, c = 15;
    int p = a < b && b < c;
    cout<<p;
}
/*

a < b 5<10 True
b < c 10<15 true
T && T -> True(1)
*/