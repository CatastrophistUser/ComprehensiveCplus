#include <iostream>               //Program to understand Operator overloading.
using namespace std;
class opOver
{
    private:                      //Declaring Global variables
    int real,imag;
    public:
    opOver()                      //Default Constructor
    {
        real=0;
        imag=0;
    }
    opOver(int r, int i)          //Parameterized Constructor
    {
        real=r;
        imag=i;
    }
    void print()                  //Function for displaying output
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    /* Operator Overloading */
    opOver operator +(opOver op) //opOver is used as a data type (user-defined)
    {
        opOver temp;             //Creating a temporary variable
        temp.real=real+op.real;  //"real" corresponds to real value of c1, "c.real" corresponds to data member of c2
        temp.imag=imag+op.imag;
        return temp;
    }
};
int main()
{
    /* Operator Overloading Example */
    opOver ob1(2,4);            //Object creation/Constructor calling
    opOver ob2(10,12);
    opOver ob3;
    ob3=ob2+ob1;     
    ob3.print();               //this expression can be equated to: ob3=ob1.add(ob2);
    /* Basic Use of Binary Operator */
    // int x=5;
    // int y=9;
    // int z=x+y;
    // cout<<"Value of z= "<<z<<endl;
    // return 0;
}