//4.WAP to program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Maths
{
    int a,b;

public:
    Maths(int x,int y)
        {
            a = x;
            b = y;
        }
        void Cal()
        {
            cout<<"The Addition of two num is: "<<a+b<<endl;
            cout<<"The Subtraction of two num is: "<<a-b<<endl;
            cout<<"The Multiplication of two num is: "<<a*b<<endl;
            cout<<"The Division of two num is: "<<a/b<<endl;
        }      
};
int main()
{
    Maths m1(30,10);
    m1.Cal();
}