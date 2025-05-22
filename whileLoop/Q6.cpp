// 6. Check if Number is Armstrong (3-digit) Input: 153 → Output: Yes (1³ + 5³ + 3³ = 153)
#include<bits/stdc++.h>
using namespace std;
int isArmstrongNum(int n){
    int originalNum=n,sum=0 ;
    while(n>0){
        int rem= n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    return sum==originalNum;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(isArmstrongNum(num)){
        cout<<"Yes,Given number is Armstrong Number,";
    }else{
        cout<<"No, Given number is not Armstrong number,";
    }
}