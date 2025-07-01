/*
18. Logical XOR Simulation:
Problem: Evaluate the following expression to simulate XOR behavior:
r = (a || b) && !(a && b);
Input Example:
a = true, b = false
Question: What is the value of r?
*/
#include<iostream>
using namespace std;
int main(){
   int a = true, b = false, r = (a || b) && !(a && b);
   cout<<r;
}//true