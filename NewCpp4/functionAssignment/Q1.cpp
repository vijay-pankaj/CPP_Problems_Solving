/*1. Split the number into two equal parts and return the sum of their squares.
   Example: 12345 → 123² + 45²
*/

#include<iostream>
using namespace std;

int twopartsqrSum(int n){
    string str=to_string(n);
    int s=0,e=str.size();
    int mid=s+(e-s)/2;
    string first = str.substr(0, mid+1);
    string second = str.substr(mid+1);
    int num1=stoi(first),num2=stoi(second);
    int result=(num1*num1)+(num2*num2);
    return result;
}


int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
   cout<<twopartsqrSum(n);

}