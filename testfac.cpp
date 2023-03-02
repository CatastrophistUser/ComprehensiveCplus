#include<iostream> //Program to print factorial of a given number.
using namespace std;
class factorial
{
        private:
        int n,n1,f=1;
        public:       
        void input()
        {
                cout<<"\nEnter any number :: ";
                cin>>n;
        };
        void calc()
        {
                n1=n;
                if(n==0||n==1)
                cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
                else
                {
                        while(n>0)
                        {
                                f=f*n;
                                n--;
                        }
                }
        };
        void display()
        {
                cout<<"\nFactorial of given no: "<<n1<<" is "<<f<<"\n";
        };
};
int main ()
{
        factorial ob;
        ob.input();
        ob.calc();
        ob.display();
        return 0;
}