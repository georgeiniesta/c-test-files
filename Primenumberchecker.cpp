#include <iostream>
using namespace std;

int main()
{
    int i, n,factor,counter=0;
    cout<<"What is n "<<endl;
    cin>>n;

    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            counter++;
        }
    }
    if (counter==2)
    {
        cout<<"Prime number"<<endl;

    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
    return 0;
}
