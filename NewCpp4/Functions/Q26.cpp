/*
11. Find Sum of Odd and Even Numbers: Write a function that finds the sum of odd and even numbers in a given range.
Input: 1 10
Output: Sum of odd: 25, Sum of even: 30
*/
#include<bits/stdc++.h>
using namespace std;

void sumOfOddEve(int n,int m){
 int sumofOdd=0,SumOfEve=0;
for(int i=n; i<=m; i++){
    if(i%2==0)SumOfEve+=i;
    else sumofOdd+=i;
}
cout<<"sum of odd"<<sumofOdd;
cout<<"sum of EVen:"<<SumOfEve;
}

int main(){
    int start,end;
    cout<<"Enter starting point: "<<endl;
    cin>>start;
    cout<<"Enter ending point: "<<endl;
    cin>>end;
    sumOfOddEve(start,end);
}