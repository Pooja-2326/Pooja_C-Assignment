/*
15.Write a program of to Sort the Array using Templates.
*/

#include <iostream>
using namespace std;
class A
{

public:
    template <typename T>
    T sort()
    {
        T a[5], i, j, temp;
        cout << "Enter any random five numbers:";
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        cout << "Entered numbers:" << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << endl;
        cout << "The numbers sorted are:";

        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)

                if (a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            {
                cout << " " << a[i];
            }
        }
    }
};

int main()
{
    A a1;
    a1.sort<int>();
}