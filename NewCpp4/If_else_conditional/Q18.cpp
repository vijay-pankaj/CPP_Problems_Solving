/*
18. Bill Discount :

Explanation:
If Bill ≥ ₹500: Discount = 10% of the bill amount → bill - (bill * 0.10)
If Bill < ₹500: No discount → Bill remains the same.

Input: ₹600
Output: Discounted Bill: ₹540

Input: ₹300
Output: No Discount: ₹300
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int bill;
    cout<<"Enter number: ";
    cin>>bill;
    
    // first
    if(bill>=500)cout<<"Discounted price is: "<<bill-(bill*0.10);
    else cout<<"No discount  Bill remains the same: ";

    //second
    // string isDiscounted=(bill>=500)?"Discounted 10%":"not Discounted";
    // cout<<isDiscounted;
    
    
}