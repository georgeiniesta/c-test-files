#include <iostream>
using namespace std;

int main()
{
    int m,n,r,rev=0;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<endl;
    m=n;
    while (n>0)
    {
        r=n%10; //152%10=2
        n=n/10; //=15
        rev=rev*10+r; //2-----20+5=25---250+1=251
    }
        cout<<"Reverse number is: "<<rev<<endl;

    if(rev==m)
    {
        cout<<"Palindrome number."<<endl;

    }
    else
    {
        cout<<"Not palindrome number."<<endl;
    }
     return 0;
}
