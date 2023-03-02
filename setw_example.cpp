#include <iostream> //Program to Illustrate setw() function under <iomanip>
#include <iomanip>
using namespace std;
int main()
{
    int a=80, b=900, c=1098;
    cout<<"Without setw()"<<"\n";
    cout<<"Value of a: "<<a<<"\n";
    cout<<"Value of b: "<<b<<"\n";
    cout<<"Value of c: "<<c<<"\n";
    cout<<"With setw()"<<"\n";
    cout<<"Value of a: "<<setw(4)<<a<<"\n";
    cout<<"Value of b: "<<setw(4)<<b<<"\n";
    cout<<"Value of c: "<<setw(4)<<c<<endl;
}