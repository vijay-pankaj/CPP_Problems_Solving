/*
9.  Pointer Subtraction :
Create two integer variables, x and y. Declare two pointers, ptr1 and ptr2, pointing to x and y respectively. 
Use pointer arithmetic to calculate the difference between the two pointers.
*/
#include<iostream>
using namespace std;
int main(){
    int x=10,y=20;
    int *ptr1=&x,*ptr2=&y;
    cout<<"Difference of x and y is: "<<*ptr1-*ptr2;
}