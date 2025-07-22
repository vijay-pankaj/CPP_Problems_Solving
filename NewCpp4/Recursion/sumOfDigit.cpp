#include<iostream>
using namespace std;
int sumOfDigit(int n){
   static int sum;
    if(n==0)return sum;
    sum+=n%10;
    return sumOfDigit(n/10);
}
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<sumOfDigit(num);
}