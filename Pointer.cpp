#include <iostream> //Program to illustrate the use of pointers.
using namespace std;
int main()
{
    int a=1095;  //declaring and initializing variable
    int *p=&a; //declaring a pointer; &=Address of operator
    cout<<"Address of a: "<<p;  //prints address of variable a
    return 0;
}