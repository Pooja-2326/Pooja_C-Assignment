/*
12.WAP to find the max number from given two numbers using 
Frined Function.
*/

#include <iostream>
using namespace std;

class A
{
protected:
    int a,b;

public:
    A()
    {
        cout<<"Enter value 1:";
        cin>>a;
        cout<<"Enter value 2:";
        cin>>b;

        cout<<"Before Swapping :"<<a<<"\t"<<b<<endl;
    }
        friend void swap(A obj);
};
void swap(A obj)
{
    obj.a=obj.a*obj.b; //5*10 =50
    obj.b=obj.a/obj.b; //50/10=5
    obj.a=obj.a/obj.b; //50/5=10
    cout<<"After Swapping :"<<obj.a<<"\t"<<obj.b<<endl;

}
int main()
{
    A aa;
    swap(aa);
}