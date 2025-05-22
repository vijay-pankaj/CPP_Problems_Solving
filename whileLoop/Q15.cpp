// 15. Find Sum of Squares of Digits Input: 123 → Output: 1²+2²+3² = 14
#include <bits/stdc++.h>
using namespace std;
int sumOfSqrDigit(int num)
{
   int sum = 0;
   while (num > 0)
   {
      int rem = num % 10;
      sum = sum + (rem * rem);
      num /= 10;
   }
   return sum;
}
int main()
{
   int num;
   cout << "Enter number: ";
   cin >> num;
   cout << sumOfSqrDigit(num);
}