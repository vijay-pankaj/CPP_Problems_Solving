/*
3. Negation with Arithmetic:

Problem: Evaluate the following expression:
c = !(5 + 2 < 10);
Question: What is the value of c?

*/
#include<iostream>
using namespace std;
int main(){
   int c = !(5 + 2 < 10);
   cout<<c;
}
/*
5 + 2 = 7

7 < 10 -> true -> 1

!(1) -> false -> 0
*/