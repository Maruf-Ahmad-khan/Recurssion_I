#include<iostream>
using namespace std;
bool Palindrome(int x)
{
     // base case
     if(x < 0 || (x % 10 == 0 && x != 0))
     {
          return false;
     }
     int rev = 0;
     while(x > rev)
     {
          rev = rev * 10 + x % 10;
          x = x / 10;
     }
     return x == rev || x == rev / 10;
      
}
int main()
{
     int x ;
     cout<<"Enter the value of x :"<<endl;
     cin>>x;
     cout<<"check the number is palindrome or not :"<<Palindrome(x)<<endl;
     return 0;

}