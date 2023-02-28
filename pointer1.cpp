#include<iostream>  //Program to illustrate the use of pointers
using namespace std;
int main()
{ 
int *p, sum=10;
p=&sum;
cout<<"Address of sum:"<<&sum<<endl;
cout<<"Address of sum:"<<p<<endl;
cout<<"Address of p:"<<&p<<endl;
cout<<"Value of sum"<<*p;
}
