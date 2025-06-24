/*
12. Find Factor of a Number: Write a function to find all the factors of a number.
Input: 12
Output: Factors: 1 2 3 4 6 12
*/
#include<bits/stdc++.h>
using namespace std;
void factorsofNum(int n){
   int i=1;
   while(i<=n){
    if(n%i==0)cout<<i<<" ";
    i++;
   }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    factorsofNum(n);

}