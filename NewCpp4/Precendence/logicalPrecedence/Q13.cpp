/*
13. Short-Circuit Evaluation:
Problem: Evaluate the following expression:
m = (5 > 10 && 8 + 2 > 5) || (3 * 3 == 9);
Question: What is the value of m?
(Note: Logical operators may short-circuit based on the first condition.)
*/
#include<iostream>
using namespace std;
int main(){
int m = (5 > 10 && 8 + 2 > 5) || (3 * 3 == 9);
   cout<<m;
}
/*
5 > 10 -> false -> 0
8 + 2 = 10, and 10 > 5 -> true -> 1
 0 && 1 -> false -> 0
3 * 3 = 9 -> 9 == 9 -> true -> 1
0 || 1 -> true -> 1
*/