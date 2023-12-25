#include <iostream>
using namespace std;
// printing the digits using recursion
void Print(int n)
{
     if (n == 0)
          return;
     int newvalue = n / 10;
     Print(newvalue);
     int digit = n % 10;
     cout << digit << " ";
}

int main()
{
     int n = 674;
     Print(n);
     return 0;
}