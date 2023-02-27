#include <iostream> //Program for Linear Search
using namespace std;
class LSearch
{
   public:
   // int size;
   int arr[10]={0,1,4,7,96,5,52,8,2,8};
   int key;
   /* void input()
   {
       // cout<<"Enter the size of the array: ";
       // cin>>size;
       cout<<"Enter the elements of the array: ";
       for(int i=0;i<10;i++)
       {
           cin>>arr[i];
       }
   } */
   void search()
   {
    cout<<"Enter number to be searched: ";
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==key)
        cout<<"Number found at: "<<i;
    }
   };
};
   int main()
   {
    LSearch obj;
    // obj.input();
    obj.search();
    return 0;
   }

   //Time Complexity O(n)
   //Space Complexity O(1)