#include<iostream>
using namespace std;
void print(int arr[], int n, int i)
{
     // base case
     if(i>=n)
     return ;
     cout<<arr[i]<<" "<<endl;
     print(arr, n, i+1);
}
int main()
{
     int arr[5] = {12,13,14,15,16};
     int n = 5;
     int i = 0;
     print(arr, n, i);
     return 0;
}