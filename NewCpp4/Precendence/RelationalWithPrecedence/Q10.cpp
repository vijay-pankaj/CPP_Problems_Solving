/*
10. Relational with Parentheses:
Problem: Evaluate the following expression:
j = (10 > 5) == ((3 + 2) < 4);
Question: What is the value of j?
*/
#include<iostream>
using namespace std;
int main(){
    int j = (10 > 5) == ((3 + 2) < 4);
    cout<<j;
}
/*
(10 > 5) is 10 greater than 5 true
((3 + 2) < 4)
5<4 is 5 less than 4 false 
T==F->false(0)
*/