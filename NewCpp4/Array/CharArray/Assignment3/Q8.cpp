#include<iostream>
#include<cctype>
using namespace std;

string uppercaseFunc(string str2) {
    if (!str2.empty()) {
        str2[0] = toupper(str2[0]);
    }
    return str2;
}

string capitalizeFirstword(string str, int n) {
    string word = "", result = "";
    for (int i = 0; i <= n; i++) {
        if (i < n && str[i] != ' ') {
            word += str[i];
        } else {
            if (!word.empty()) {
                result += uppercaseFunc(word);
                word = "";
            }
            if (i < n) result += ' ';
        }
    }
    return result;
}

int main() {
    string str = "capitalize the first letter of each word";
    int n = str.size();
    cout << "Capitalized String: " << capitalizeFirstword(str, n);
    return 0;
}
