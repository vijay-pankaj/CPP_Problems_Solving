/*
14. Equality vs. Assignment:
Problem: Evaluate the following expression:
n = (a = 10) == 10;
Question: What is the value of n?
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    int n = (a = 10) == 10;
    cout<<n;
}