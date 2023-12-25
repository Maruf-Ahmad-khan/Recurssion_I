#include<bits/stdc++.h>
using namespace std;
void Printsubstr(string str, string ans , int i)
{
     // base case
     if(i>=str.length())
     {
          cout<<"The number of substrings are:"<<ans<<endl;
          // only return because the return type is void
          return ;
     }
     // exclude
     Printsubstr(str, ans, i + 1);

     // include
     ans.push_back(str[i]);
     Printsubstr(str, ans, i + 1);
}
int main()
{
     string str = "abc";
     string ans = "";
     int i = 0;
     Printsubstr(str, ans, i);
     return 0;
}