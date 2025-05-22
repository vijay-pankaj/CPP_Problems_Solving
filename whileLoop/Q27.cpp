// 27. Check if Number is Spy Number (Sum of digits = Product of digits) Input: 123 → Sum: 6, Product: 6 → Output: Yes
#include <bits/stdc++.h>
using namespace std;

bool isSpyNum(int n)
{
    int sum = 0, product = 1;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        product *= rem;
        n /= 10;
    }
    return product==sum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if(isSpyNum(num)){
        cout<<"Yes, Given number is a spy number"<<endl;
    }else{
        cout<<"No, Given number is Not a spy number"<<endl;
    }
}