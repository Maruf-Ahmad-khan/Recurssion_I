#include<bits/stdc++.h>
using namespace std;
int reversechar(char name[])
{
  int left = 0;
  int right = 0;
  while(left<=right)
  {
     swap(left, right);
     left ++;
     right --;
  }
}
int main()
{
     char name[100];
     cout<<"Enter your name :"<<endl;
     cin>>name;
     reversechar(name);
     cout<<"The reverse name is :"<<name<<endl;
     return 0;
}