#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int left, int right)
{
     while (left <= right)
     {
          if (s[left] != s[right])
          return false;
          left++;
          right--;
     }
     return true;
}

bool validPalindrome(string s)
{
     int left = 0;
     int right = s.size() - 1;
     while (left <= right)
     {
          if (s[left] != s[right])
          {
               return checkPalindrome(s, left + 1, right) || checkPalindrome(s, left, right - 1);
          }
          else
          {
               left++;
               right--;
          }
     }
     return true;
}

int main()
{
     string s = "aba";
     cout<<"The valid Palindrome is :"<<validPalindrome(s)<<endl;
     return 0;
}