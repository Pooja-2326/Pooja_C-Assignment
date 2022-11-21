/*
14.Write a program of to Swap the two values using Templates.
*/

#include <iostream>
using namespace std;
 
class A
{
public:
    template <typename T>
    T swap(T a, T b)
    {
        cout << "Before swapping :" << a << "\t" << b << endl;
        a = a + b; // 5*10 =50
        b = a - b; // 50/10=5
        a = a - b; // 50/5=10
        cout << "After swapping :" << a << "\t" << b << endl;
    }
};

int main()
{
    A a1;
    a1.swap<int>(5, 6);
}
