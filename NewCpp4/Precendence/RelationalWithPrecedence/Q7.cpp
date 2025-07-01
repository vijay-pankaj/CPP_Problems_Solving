/*
7. Mixing Relational and Arithmetic:
Problem: Evaluate the following expression:
g = (2 + 3 > 5) == (4 - 2 < 3);
Question: What is the value of g?
*/
#include<iostream>
using namespace std;
int main(){
    int g = (2 + 3 > 5) == (4 - 2 < 3);
    cout<<g;
}
/*
(2 + 3 > 5) is 5 is gretaer than 5 conditon false;
 (4 - 2 < 3) is 2 is less than 3 condition true arithmatic operation first so condition true
 false==true(false)0;
*/