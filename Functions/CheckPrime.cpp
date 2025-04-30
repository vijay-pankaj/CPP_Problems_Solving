// Write a C++ function that takes an integer as an argument
//  and uses an if-else statement to determine whether the number is prime or not, then returns the result.
// #include<bits/stdc++.h>
// using namespace std;
// void checkPrime(int n){
// int count=0;
    // for(int i=2;i<n; i++){
    //     if(n%i==0){
    //         count++;
    //     } 
    // }
    // if(count==0){
    //     cout<<"Given number is prime number";
    // }else{
    //     cout<<"Not prime";
    // }

// }
// int main(){
    // checkPrime(3);
    // checkPrime(9);
    // checkPrime(7);
// }


// second way using return type;
#include<bits/stdc++.h>
using namespace std;
bool checkPrimeBool(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return  false;
    }
    return true;
}

int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    if(checkPrimeBool(n)){
        cout<<"prime number";
    }else{
        cout<<"not prime";
    }
}