/*
7. Print a Pattern of Numbers :
-> Task: Write a recursive function to print a simple pattern of numbers like:
	
	1
	1 2
	1 2 3
	1 2 3 4

*/
#include<iostream>
using namespace std;
void printNumbers(int col) {
    if (col == 0)
        return;
    
    printNumbers(col - 1);
    cout << col << " ";
}

void printPattern(int row, int current = 1) {
    if (current > row)
        return;

    printNumbers(current);
    cout << endl;
    
    printPattern(row, current + 1);
}
int main(){
    int n;
    cout<<"enter n value: ";
    cin>>n;
    printPattern(n);

}