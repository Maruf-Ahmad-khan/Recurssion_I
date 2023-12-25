#include<iostream>
using namespace std;
int staricase(int n)
{
     // base case
     if(n==1)
     return 1;
     if(n==2)
     return 2;
     return staricase(n-1)+staricase(n-2);
}
int main()
{
     int n;
     cout<<"Enter n :"<<endl;
     cin>>n;
     cout<<"The way of climbing is :"<<staricase(n)<<endl;
     return 0;
}