#include<iostream>
using namespace std;
class Temperature
{
    int Celcius;
    public:
    void display(int C)
    {
     Celcius = C;
     int F = (C * 9 / 5) + 32;
     cout<<"Temperature in degree celcius is :"<<Celcius<<endl;
     cout<<"Temperature in Fahrenheight is : "<<F<<endl;
    }
};

int main()
{
     Temperature T;
     T.display(50);
     return 0;
}