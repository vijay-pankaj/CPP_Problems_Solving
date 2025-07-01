/*
8. Pointer Arithmetic with Simple Variables :
Declare two integer variables a and b. Declare a pointer that points to a.
 Use pointer arithmetic to set the value of b to be the sum of a and b using ptr.
*/
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr=&a;
    int sum=b+*ptr;
    int *ptr2=&b;
    *ptr2=sum;
    cout<<*ptr2;
}