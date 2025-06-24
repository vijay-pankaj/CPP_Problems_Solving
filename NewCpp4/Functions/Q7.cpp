/*
7. Check Divisibility by 3 and 5: Write a function that checks if a number is divisible by both 3 and 5.
Input: 15
Output: Divisible by both 3 and 5
*/
#include<bits/stdc++.h>
using namespace std;
bool isDivisible(int n){
    return (n%3==0&&n%5==0);
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(isDivisible(num))cout<<"The Given Number is Divisible By both 3 & 5";
    else cout<<"The number is Not Divisible by both";
}