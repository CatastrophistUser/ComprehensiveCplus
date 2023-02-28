#include <iostream>      //Program to illustrate operator overloading (non-parameterized constructors)
using namespace std;
class opOverNon
{
    private:
    int n;
    public:
    opOverNon()         //Default Constructor
    {
        n=10;           //Initializing value
    }
    void operator ++()  //Operator Overloading
    {
        n=n+10;
    }
    void display()
    {
        cout<<"Value of n: "<<n<<endl;
    }
};
int main()
{
    opOverNon ob;      //Creating object
    ++ob;              //Incrementing ob
    /* Since the ++ has the new definition of ading 10, hence now it will increment by 10 instead of 1 */
    ob.display();
    return 0;
}