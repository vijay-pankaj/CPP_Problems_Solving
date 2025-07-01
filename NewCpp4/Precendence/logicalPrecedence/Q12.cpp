/*
12. Arithmetic and Logical Combination:
Problem: Evaluate the following expression:
l = (20 / 4 + 2 > 7) || (15 % 2 != 0 && 9 - 3 == 6);
Question: What is the value of l?
*/
#include<iostream>
using namespace std;
int main(){
int l = (20 / 4 + 2 > 7) || (15 % 2 != 0 && 9 - 3 == 6);
   cout<<l;
}
/*
(20 / 4 + 2 > 7)->true--1


15 % 2 != 0 True --2
9 - 3 == 6 false --3
2 && 3 ->false --4

1||4==true
*/