/*
9. Multiply the first and last digit, then add the sum of all middle digits.
   Example: 384 → 3×4 + 8
*/
#include<iostream>
using namespace std;
int mulFirstlastSum(int n){
    string str=to_string(n);
    int e=str.size();
    int multiFirstAndLastSum= (str[0]-'0')*(str[e-1]-'0');
    for(int i=1;i<e-1;i++){
        char ch=str[i];
        int digit=ch-'0';
        multiFirstAndLastSum+=digit;
    }
    return multiFirstAndLastSum;

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   cout<<mulFirstlastSum(n);
}