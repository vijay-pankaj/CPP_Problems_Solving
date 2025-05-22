// 22. Check if Number is Strong Number A number whose digits' factorials sum to the number itself.
//  Input: 145 → 1! + 4! + 5! = 145 → Output: Yes
#include<bits/stdc++.h>
using namespace std;
int factOfNum(int n){
    int fact=1,i=1;
    while(n>=i){
        fact*=i;
        i++;
    }
    return fact;
}

bool isStrongNum(int n){
   int sum=0,originalNum=n;
    while(n>0){
        int rem=n%10;
        sum+=factOfNum(rem);
        n/=10;
    }
    return sum==originalNum;

}
int main(){
int num;
cout<<"Enter number: ";
cin>>num;
if(isStrongNum(num)){
    cout<<"Yes, Given number is a strog number";
}else{
    cout<<"No, Given number is NOt a strog number";

}
}