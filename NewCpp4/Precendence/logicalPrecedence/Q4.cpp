/*
4. Logical AND and Division:

Problem: Evaluate the following expression:
d = (20 / 4 == 5) && (8 - 3 > 4);
Question: What is the value of d?
*/
#include<iostream>
using namespace std;
int main(){
   int d = (20 / 4 == 5) && (8 - 3 > 4);

   cout<<d;
}
/*
20 / 4 = 5
8 - 3 = 5
5 == 5 -> true -> 1
5 > 4 -> true -> 1
1 && 1 -> true -> 1
*/