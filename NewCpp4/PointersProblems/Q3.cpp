/*
3. Access value of variable using pointer
Task: Use a pointer to access and print the value of a variable.0786
Input: int num = 15; int* ptr = &num;
Output: Value pointed to by ptr: 15
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=15;
    int *ptr=&num;
    cout<<*ptr;
}
