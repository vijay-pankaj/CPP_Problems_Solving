/*
10. Negation with OR:
Problem: Evaluate the following expression:
j = !(6 + 2 > 10) || (12 - 4 < 5);
Question: What is the value of j?
*/
#include<iostream>
using namespace std;
int main(){
int j = !(6 + 2 > 10) || (12 - 4 < 5);
   cout<<j;
}
/*
8>10->!(false)->true
8<5->false
T||F->true(1)

*/