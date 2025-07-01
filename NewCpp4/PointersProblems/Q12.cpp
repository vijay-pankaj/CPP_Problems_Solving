/*
12. Pointer Arithmetic with Characters :
Declare a character variable ch and a pointer ptr pointing to it.
Increment the pointer by 1 and print the address and value of ch.
*/
#include<iostream>
using namespace std;
int main(){
    char ch='z';
    char *p=&ch;
    p++;
    cout<<*p;
}