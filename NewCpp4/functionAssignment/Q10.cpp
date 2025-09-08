/*10. Count how many digits in the number are prime (i.e., 2, 3, 5, 7).
    Example: 23789 → prime digits = 2, 3, 7 → count = 3
*/
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int countPrimeDigit(int n){
    int count=0;
    while(n){
        int digit=n%10;
        if(isPrime(digit))count++;
        n/=10;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<countPrimeDigit(n);
}