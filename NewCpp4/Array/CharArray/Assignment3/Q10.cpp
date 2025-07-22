/*
10. Find the Smallest Word in a String
-> Problem Statement: Find the smallest word in a char array (string).
Explanation:
-> Split the string into words and find the smallest word by length.
Input:
-> char str[] = "find the smallest word in this string";  
Output:
-> Smallest Word: "in" 
*/
#include<iostream>
#include<climits>
using namespace std;
string smallestWord(string str,int n){
     string smalleststr = "", newstr = "";
    int maxLen =INT_MAX;

    for (int i = 0; i <= n; i++) {
        if (i < n && str[i] != ' ') {
            newstr += str[i];
        } else {
            if (newstr.length() < maxLen) {
                maxLen = newstr.length();
                smalleststr = newstr;
            }
            newstr = "";
        }
    }
    return smalleststr;
};
int main(){
    string str="find the smallest word in this string";
    int n=str.size();
    cout<<"smallest word in given string is: "<<smallestWord(str,n);

}