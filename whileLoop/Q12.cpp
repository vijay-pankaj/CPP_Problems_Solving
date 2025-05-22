// 12. Count Number of Zeros in a Number Input: 102030 → Output: 3
#include<bits/stdc++.h>
using namespace std;

int countZero(int num){
    int count=0;
    while(num>0){
        int rem=num%10;
        num=num/10;
        if(rem==0){
            count++;
        }

    }
    return count;
}
 int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
  cout<<countZero(num);
 }