/*
9. Find Sum of N Natural Numbers: Write a function that returns the sum of first N natural numbers.
Input: 5
Output: Sum: 15
*/
#include<bits/stdc++.h>
using namespace std;
int sumofnDigits(int n){
    int sum=0;
    while(n){
        sum+=n;
        n--;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<sumofnDigits(num);
}