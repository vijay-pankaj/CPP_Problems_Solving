/*
17. Negative Numbers in Logical Expressions:
Problem: Evaluate the following expression:
q = (-5 + 10 > 3) || (-10 + 5 < 0);
Question: What is the value of q?
*/
#include<iostream>
using namespace std;
int main(){
int q = (-5 + 10 > 3) || (-10 + 5 < 0);
   cout<<q;
}
/*
-5 + 10 = 5 → 5 > 3 -> true -> 1
-10 + 5 = -5 -> -5 < 0 -> true -> 1
1 || 1 -> 1
*/