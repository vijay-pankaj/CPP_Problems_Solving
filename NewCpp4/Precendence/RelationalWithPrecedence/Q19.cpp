/*
19. Relational with Bitwise AND:
Problem: Evaluate the following expression:
s = (10 & 8) < 5;
Question: What is the value of s?
*/
#include<iostream>
using namespace std;
int main(){
    int s = (10 & 8) < 5;
    cout<<s;
}
/*
10 in binary: 1010  
 8 in binary: 1000
 1000->8
 8<5 False(0)
*/