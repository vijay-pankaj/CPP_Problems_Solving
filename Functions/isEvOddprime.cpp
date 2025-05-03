// Write a C++ function that takes a single digit as input and uses 
// nested if-else statements to determine if it is even or odd and if it is prime or not.
#include<bits/stdc++.h>
using namespace std;

// string  isprime(int n){
//     for(int i=2; i<n;i++){
//         if(n%i==0){
//             return "Not Prime";
//         }
//     }
//     return "Prime";
// }

// string isEven(int n){
//     if(n%2==0){
//         return "Even";
//     }else{
//         return "Odd";
//     }
// }

bool isprime(int n){
    for(int i=2; i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

string isPrimeoddOreven(int n){
    if(n%2==0){
        if(isprime(n)){
            return " Even and prime";
        }else{
            return "Even and not-prime";
        }
    }else{
        if(isprime(n)){
            return "Odd and prime";
        }else{
            return "Odd not-prime";
        }
    }
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    // cout<<"given number is "<<isprime(n)<<" and "<<isEven(n);
    cout<<"given number is "<<isPrimeoddOreven(n);

}