/*5. Return the sum of cubes of all digits of the number.
   Example: 153 → 1³ + 5³ + 3
*/
#include<iostream>
using namespace std;
int sumOFDigitCUbe(int n){
    int sum=0;
    while(n){
        int digit=n%10;
        int cube=digit*digit*digit;
        sum+=cube;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sumOFDigitCUbe(n);
}