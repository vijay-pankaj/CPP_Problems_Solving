// 10. Find the Greatest Digit in a Number Input: 8579 → Output: 9
#include<bits/stdc++.h>
using namespace std;

int GreatestNum(int n){
    int max=0;
    while(n>0){
        int rem=n%10;
        if(rem>max){
            max=rem;
        }
        n/=10;
    }
    return max;
}



int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The max number in given digit is: "<<GreatestNum(num);

}