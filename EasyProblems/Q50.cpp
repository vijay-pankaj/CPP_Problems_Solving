// 58. Take a string input and print it in reverse.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

}