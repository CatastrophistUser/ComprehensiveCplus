#include <iostream>  //Program to illustrate explicit type casting.
using namespace std;  
int main()
{    
double x = 1.2;      
// Explicit conversion from double to int    
int sum = (int)x + 1;      
cout << "Sum = " << sum;      
return 0;
}
