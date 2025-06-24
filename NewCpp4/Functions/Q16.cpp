/*
1. Print Natural Numbers: Write a function to print the first N natural numbers.
Input: 5
Output: 1
	2
	3
	4
	5
*/
#include<bits/stdc++.h>
using namespace std;

void firstnNaturalNum(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Entter a number: ";
    cin>>n;
    firstnNaturalNum(n);

}