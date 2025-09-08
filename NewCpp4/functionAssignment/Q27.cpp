/*
27. Swap the first and last digit, and return the new number.
    Example: 1234 → 4231
*/
#include<iostream>
using namespace std;
 int swapFirstandLastDigit(int n){
    string str=to_string(n);
    int result;
    int e=str.size()-1;
    swap(str[0],str[e]);
    result=stoi(str);
    return result;
 }

int main(){
    int n=1234;
   cout<<swapFirstandLastDigit(n);
}