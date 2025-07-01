/*
5. Complex Expression:
Problem: Evaluate the following expression:
e = 20 - 4 / 2 + 3 * 2;
Question: What is the value of e?
*/
#include<iostream>
using namespace std;
int main(){
    int e = 20 - 4 / 2 + 3 * 2;
    cout<<e;//24
}
/*
/ and *  higher precedence than + and -, L To R
Then + and - are evaluated left to right
4 / 2 -> 2
3 * 2 -> 6
*/