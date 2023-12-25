#include<iostream>
using namespace std;
void print(int arr[], int n, int i)
{
     // base case
     if(i>=n)
     return ;
     print(arr, n, i+1);
     cout<<arr[i]<<" "<<endl;
}
int main()
{
     int arr[5] = {12,13,14,15,16};
     int n = 5;
     int i = 0;
     print(arr, n, i);
     return 0;
}