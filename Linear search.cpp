#include <iostream>
using namespace std;
int main()
{
   int key,A[10],n=10;
   cout<<"Enter numbers"<<endl;
   for (int i=0;i<n;i++)//input all values for array//
   {
       cin>>A[i];
   }

   cout<<"Enter key: "<<endl; //key is what we search//
   cin>>key;

   for(int i=0;i<n;i++)
   {
       if (key==A[i])
       {
           cout<<"Key found at "<<i<<endl;
           return 0;
       }
   }
       cout<<"Key not found"<<endl;

}
