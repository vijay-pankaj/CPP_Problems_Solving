/*
3. Parentheses and Precedence:
Problem: Evaluate the following expression:
c = (5 + 3) * 2;
Question: What is the value of c?
*/
#include<iostream>
using namespace std;
int main(){
      int c = (5 + 3) * 2;
    cout<<c;//16
}
/*
() (parentheses) have the highest precedence, so evaluated first
Then * (multiplication)

(5 + 3) -> 8
8 * 2 -> 16
*/