/*
5. Print the address of a variable and its value
Task: Print both the address and value of a variable using a pointer.
Input: int a = 5; int* ptr = &a;
Output: Address: <memory_address>, Value: 5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=15;
    int *ptr=&num;
    cout<<"Address of value: "<<ptr<<endl;
    cout<<"value which is store at address of *ptr: "<<*ptr;
}
