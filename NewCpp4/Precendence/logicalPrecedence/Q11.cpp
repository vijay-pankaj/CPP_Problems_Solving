/*
11. Multiple Logical AND Conditions:
Problem: Evaluate the following expression:
k = (8 - 3 > 4) && (15 / 3 == 5) && (10 % 5 == 0);
Question: What is the value of k?
*/
#include<iostream>
using namespace std;
int main(){
int k = (8 - 3 > 4) && (15 / 3 == 5) && (10 % 5 == 0);
   cout<<k;
}
/*
5>4 true
15/3==5 true
T&&T->T
10%5==0 True
T&&T->T
*/