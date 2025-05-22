// 11. Check if Number is Harshad (Niven) Number Input: 18 → Output: Yes (18 ÷ (1+8) = 2)
#include<bits/stdc++.h>
using namespace std;
bool isHarsadNum(int n){
    int originalNum=n ,sum=0;
    while(n>0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return originalNum%sum==0;
}


int main(){
    int num;
    cout<<"Enter numbers: ";
    cin>>num;
    if(isHarsadNum(num)){
        cout<<"Yes, Given number is Harshad number";
    }else{
        cout<<"No, Given number is not a Harshad number";
    }

}