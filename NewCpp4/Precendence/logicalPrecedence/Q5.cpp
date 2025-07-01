/*
5. Combining AND, OR, and Arithmetic:
Problem: Evaluate the following expression:
e = (6 + 2 > 5 || 10 - 3 < 4) && (15 % 5 == 0);
Question: What is the value of e?
*/
#include<iostream>
using namespace std;
int main(){
   int e = (6 + 2 > 5 || 10 - 3 < 4) && (15 % 5 == 0);
   cout<<e;
}
/*
6 + 2 = 8
10 - 3 = 7
15 % 5 = 0
8 > 5 -> true → 1
7 < 4 -> false → 0
0 == 0 -> true -> 1
Left part: (8 > 5 || 7 < 4) -> 1 || 0 → 1
 1 && 1 → 1
*/