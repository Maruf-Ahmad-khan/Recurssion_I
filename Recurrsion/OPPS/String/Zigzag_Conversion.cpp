// The string "PAYPALISHIRING" is written in a zigzag pattern
// on a given number of rows like this:
//  (you may want to display this pattern in a fixed font for better legibility)
#include <bits/stdc++.h>
using namespace std;
string Conversion(string s, int_fast16_t numRows)
{
     // base condition
     if (numRows <= 1)
          return s;
     vector<string> v(numRows, "");
     int j = 0, dir = -1;
     for (int i = 0; i < s.length(); i++)
     {
          if (j == numRows - 1 || j == 0)
               dir = dir * (-1);
          v[j] = v[j] + s[i];
          if (dir == 1)
               j++;
          else
               j--;
     }
     string ans;
     for (auto &it : v)
          ans = ans + it;
     return ans;
}

int main()
{
     string s = "PAYPALISHIRING";
     int numRows = 3;
     cout<<"The Zigzag Conversion is : "<< Conversion(s, numRows)<<endl;
     return 0;
}