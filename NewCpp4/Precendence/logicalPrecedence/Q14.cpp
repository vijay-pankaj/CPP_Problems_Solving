/*
14. Parentheses and Precedence:
Problem: Evaluate the following expression:
n = ((5 + 5) > 10 || (8 / 4 == 2)) && (3 * 3 > 8);
Question: What is the value of n?
*/
#include<iostream>
using namespace std;
int main(){
int n = ((5 + 5) > 10 || (8 / 4 == 2)) && (3 * 3 > 8);
   cout<<n;
}
/*
5 + 5 = 10 -> 10 > 10 -> false -> 0
8 / 4 = 2 -> 2 == 2 -> true -> 1
3 * 3 = 9 -> 9 > 8 -> true -> 1
 (0 || 1) -> 1
Right 1
 1 && 1 -> 1
*/