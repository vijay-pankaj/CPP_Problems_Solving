/*
4. Use address-of operator to print address
Task: Print the address of a variable using the address-of operator.
Input: int num = 25;
Output: Address of num: <memory_address> 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=25;
    cout<<&num;
}