/*
11.WAP to calculate the area of Circle,Regtangle and triangle using
   Function Overloading.
  => Regtangle: Area * Breadth
  => Triangle: 1/2 Area * Breadth
  => Circle: Pi * Area *Area
*/  

#include <iostream>
using namespace std;

class Area
{
    float l, b, r, pi = 3.14;   //length, breadth, radius

public:
    void area(float r);

    void area(float l, float b);

    void area(float l, float b, float pi);
};

void Area::area(float r)
{
    cout << "Area of Circle is: " << pi * r * r << endl;
}
void Area::area(float l, float b)
{
    cout << "Area of Rectangle is: " << l * b << endl;
}
void Area::area(float l, float b, float pi)
{
    cout << "Area of Triangle is: " << 0.5 * l * b << endl;
}

int main()
{
    Area ques1;
    ques1.area(4);         //(7);
    ques1.area(4,2);      //(5, 10);
    ques1.area(2,1);     //(2, 3);
}
