/*
15. Triangle Type :

Explanation:
Equilateral Triangle: All three sides are equal.
Isosceles Triangle: Any two sides are equal.
Scalene Triangle: All three sides are different.

Input: 5 5 5
Output: Equilateral

Input: 7 7 5
Output: Isosceles
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter triangle three sides: ";
    cin>>s1>>s2>>s3;
    //first
    // if(s1==s2&&s1==s3&&s2==s3)cout<<"Equilateral";
    // if(s1!=s2||s1!=s3||s2!=s3)cout<<"Isosceles";

    //second
    // string triangleCheck=(s1!=s2||s1!=s3||s2!=s3)?"Isosceles":"Equilateral";
    // cout<<triangleCheck;
}