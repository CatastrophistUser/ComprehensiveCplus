#include<iostream>  //Program to swap two numbers using pointers
using namespace std;
void swap(int *a ,int *b );
//Call By Reference
int main()
{
int p,q;
 cout<<"\nEnter Two Number You Want To Swap \n";
cin>>p>>q;
swap(&p,&q);
cout<<"\nAfter Swapping Numbers Are Given below\n\n";
cout<<p<<" "<<q<<"\n";
return 0;
}
void swap(int *a, int *b)
{
int c;
c=*a;
*a=*b;
*b=c; 
}
