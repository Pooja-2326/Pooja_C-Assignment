/*
13.WAP to find the max number from given two numbers using 
Frined Function.
*/

#include <iostream>
using namespace std;
class A
{
    private:
    int a,b;

    public:
    A()
    {
        cout<<"Enter value 1: ";
        cin>>a;
        cout<<"Enter value 2: ";
        cin>>b;

        cout<<"value 1: "<<a<<"\tvalue 2: "<<b<<endl;
    }
        friend void max(A obj);
};
void max(A obj)
{
    int max;
    max=obj.a>obj.b?obj.a:obj.b;
    cout<<"Max:"<<max<<endl;
}
int main()
{
    A aa;
    max(aa);
}