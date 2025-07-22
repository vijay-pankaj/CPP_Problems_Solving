/*
6. Find the Longest Word in a String
-> Problem Statement: Find the longest word in a char array (string).

Explanation:
-> Split the string into words and find the word with the maximum length.

Input:
-> char str[] = "find the longest word in this string";  

Output:
-> Longest Word: "longest"  
*/
#include<iostream>
using namespace std;

string largestString(string str, int n) {
    string longest = "", newstr = "";
    int maxLen = 0;

    for (int i = 0; i <= n; i++) {
        if (i < n && str[i] != ' ') {
            newstr += str[i];
        } else {
            if (newstr.length() > maxLen) {
                maxLen = newstr.length();
                longest = newstr;
            }
            newstr = "";
        }
    }
    return longest;
}

int main() {
    string str = "find the longest word in this string";
    int n = str.size();
    cout << "Longest Word: " << largestString(str, n)<< endl;
}
