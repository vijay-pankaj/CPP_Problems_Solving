/*
2. Chained Relational Operators:
Problem: Evaluate the following expression:
b = 5 < 10 > 3;
Question: Is this valid in C++? If not, why?
*/
#include<iostream>
using namespace std;
int main(){
    int b = 5 < 10 > 3;
    cout<<b;//0 False
}
/*

5<10 true(1)
1>3 false 0
*/