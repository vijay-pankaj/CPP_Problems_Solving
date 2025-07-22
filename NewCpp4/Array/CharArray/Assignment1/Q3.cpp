/*
3. Count Vowels in a String
-> Problem Statement: Count the number of vowels (a, e, i, o, u) in a char array (string).
Explanation:
-> Loop through the string, checking each character to see if it’s a vowel.
-> Increment a counter for each vowel found.
Input:
-> char str[] = "'h','e','l','l','o' 'w' 'o' 'r' 'l' 'd'";  
Output:
-> Number of Vowels: 3 (e, o, o)  
*/
#include<iostream>
using namespace std;

void countVowels(char arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        char ch = arr[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
            || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    cout << count;
}

int main(){
    char arr[]={'h','e','l','l','o','w','o','r','l','d'};
    int n=sizeof(arr)/sizeof(arr[0]);
    countVowels(arr,n);
}