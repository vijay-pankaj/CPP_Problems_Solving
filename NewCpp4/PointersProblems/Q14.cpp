/*
14.  Pointer Comparison :
Declare two integer variables a and b. Create pointers ptr1 and ptr2 pointing to these variables. 
Compare the two pointers and print whether they are equal or not.
*/
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    cout<<(*ptr1)===(*ptr2);
}