/*
2. Pointer initialization with address-of operator

Task: Initialize a pointer with the address of a variable and print the value it points to.
Input: int num = 10; int* ptr = &num;
Output: Value pointed to by ptr: 10
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=10;
    int *ptr=&num;
    cout<<*ptr;
}
