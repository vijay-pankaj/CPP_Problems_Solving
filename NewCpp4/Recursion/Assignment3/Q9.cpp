/*
9. Count the Number of 1’s in Binary Representation of a Number :
-> Task: Write a recursive function to count the number of 1 bits in the binary representation of a number.
*/
#include<iostream>
using namespace std;
int countBinaryOne(int n){
if(n==0)return 0;
return (n%2)+countBinaryOne(n/2);
};
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<countBinaryOne(n);
}