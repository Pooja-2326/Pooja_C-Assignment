/*
9.WAP of Two 1D Matrix Addition using Operator Overloading.
*/ 

#include <iostream>
using namespace std;

class Standard_10th
{
    int Eng, Maths;

public:
    Standard_10th() {}
    Standard_10th(int Eng, int Maths)
    {
        this->Eng = Eng;
        this->Maths = Maths;
    }
    void display()
    {
        cout << Eng << " " << Maths << endl;
    }

    Standard_10th operator+(Standard_10th studs)
    {
        Standard_10th temp;
        temp.Eng = Eng + studs.Eng;
        temp.Maths = Maths + studs.Maths;

        return temp;
    }
};

int main()
{
    Standard_10th stud1(80, 70), stud2(60, 50);    //140,120
    Standard_10th stud3 = stud1 + stud2;
    stud3.display();
}