/*
7. Basic Pointer Increment :
Declare an integer variable x and a pointer ptr pointing to x. Increment the pointer and print the values of ptr and x. What is the result?
*/
#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<"before increement value of x is: "<<x<<endl;;
    int *ptr=&x;
    ++x;
    cout<<"After increement vlaue of x is"<<x<<endl;
    cout<<"Pointer value is "<<*ptr<<endl;

}