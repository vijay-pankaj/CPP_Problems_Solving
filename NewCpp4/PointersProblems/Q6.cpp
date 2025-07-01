/*
6. Change the value of a variable using a pointer
Task: Modify the value of a variable using a pointer.
Input: int a = 10; int* ptr = &a;
Output: New value of a: 20
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    cout<<"Old value of a is: "<<a<<endl;
    int *ptr=&a;
    *ptr=20;
    cout<<"New value of a is:"<<a<<endl;
}