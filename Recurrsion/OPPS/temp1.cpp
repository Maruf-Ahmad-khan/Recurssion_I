#include<iostream>
using namespace std;
class Temperature 
{
     public:
     int Fahrenheit;
     Temperature()
     {
          Fahrenheit = 20;
     }

     void display()
     {
          cout<<"Temperature in Fahreinheit is :"<<Fahrenheit<<endl;
          int Celcius = (Fahrenheit - 32)  * 5 / 9;
          cout<<"Temperature in Celcius is :"<<Celcius<<endl; 
     }
};

int main()
{
     Temperature T;
     T.display();
     return 0;
}