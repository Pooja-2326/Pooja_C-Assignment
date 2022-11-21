/*
3.WAP to find the Multiplication values and the Cubic values using inline function. */

#include <iostream>
#include <cmath>

using namespace std;

inline int multi(int a, int b)
{
    cout << "The Multiplication is: " << a * b << endl;
}
inline int cube(int a)
{
    cout << "The Cube is: " << a * a * a << endl;
}

int main()
{
    cout << "The Powered value: " << pow(2, 3) << endl;
    multi(5, 2);
    cube(5);
}