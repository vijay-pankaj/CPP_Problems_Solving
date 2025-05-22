// 14. Check if Number is Prime using while loop Input: 17 → Output: Yes
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
        return true;
}


 int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<"Yes, Given number is prime,";
    }else{
        cout<<"NO, Given number is not prime,";
    }

 }