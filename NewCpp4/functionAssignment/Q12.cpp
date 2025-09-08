/*12. Swap every pair of adjacent digits, then return the new number.
    Example: 1234 → 1↔2, 3↔4 → 2143
*/
#include<iostream>
using namespace std;
int swapPair(int n){
    string str=to_string(n);
    for(int i=0;i<str.size();i+=2){
        swap(str[i],str[i+1]);
    }
    int res=stoi(str);
    return res;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   cout<<"After swap pair: "<< swapPair(n);
}