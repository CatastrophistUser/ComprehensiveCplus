#include <iostream>  //Program to illustrate the use of function overloading.
using namespace std;
int sum(int a, int b)  //Function declaration
{
    cout<<"using function with two arguments ";
    return a+b;
}
int sum(int a, int b, int c) //Function declaration
{
    cout<<"using function will 3 arguments ";
    return a+b+c;
}
int main()
{
    cout<<"The sum of 2 and 3 is "<<sum(2,3);        //This will call sum with two parameters
    cout<<"\nThe sum of 2, 3 and 4 is "<<sum(2,3,4); //This will call sum with three parameters
}