#include <iostream>
using namespace std;

void getGrade(int marks) {
    if (marks >= 90 && marks <= 100)
        cout << "Grade: A" << endl;
    else if (marks >= 80)
        cout << "Grade: B" << endl;
    else if (marks >= 70)
        cout << "Grade: C" << endl;
    else if (marks >= 60)
        cout << "Grade: D" << endl;
    else if (marks >= 0)
        cout << "Grade: F" << endl;
    else
        cout << "Invalid Marks" << endl;
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    getGrade(marks);

    return 0;
}
