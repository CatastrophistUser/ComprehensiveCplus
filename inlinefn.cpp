#include <iostream>  //Program to illustrate the use of inline functions.
using namespace std;
inline int product(int a, int b)   //Inline function declaration
{
    static int c=0;    //Static variable statement will only execute once
    c=c+1;             //Static variable will retain its value i.e. it will not again initialize as 0 but will stay 1.
    return (a*b)+c;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The product is: "<<product(a,b);
    return 0;
};

/* Inline functions are used to increase the efficiency of the program. They take the output senntence from the 
   inline function ans paste it at the (inline) function call so as to not have to call the function each time.  */
