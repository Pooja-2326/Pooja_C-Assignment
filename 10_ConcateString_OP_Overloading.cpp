/*
10.WAP to concatenate the two strings using Operator Overloading.
*/ 

#include <iostream>
using namespace std;

class A
{
    string a = "Ashwini", b = "Patel";

public:
    A() {}
    A(string a, string b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << "   " << b << endl;
    }
    A operator+(A obj)
    {
        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    A a1(" Ashwini ", " Niral "), a2("Patel", "Diwani");
    A a3 = a1 + a2;
    a3.display();
    return 0;
}