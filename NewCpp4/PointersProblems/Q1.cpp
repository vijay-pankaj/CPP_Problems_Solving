/*
1. Find the address of a variable
Task: Use the address-of operator to print the address of a variable.
Input: int num = 10;
Output: Address of num: <memory_address>
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=10;
    cout<<&num;
}
