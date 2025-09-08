/*4. Form a new number by concatenating the square of each digit.
   Example: 123 → 1², 2², 3² → 149
*/
#include<iostream>
using namespace std;
int sqrDigitAndConcat(int n){
    string str="";
    while(n){
        int digit=n%10;
        int sqr=digit*digit;
        string tempStr=to_string(sqr);
        str=tempStr+str;
        n/=10;
    }
    return stoi(str);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sqrDigitAndConcat(n);
}