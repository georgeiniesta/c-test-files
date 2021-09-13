#include <iostream>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Please give me 3 numbers: ";
    cin>>a>>b>>c;

    if (a>b && a>c)
    {
        cout<<"The maximum number is: "<<a<<endl;
    }
    else if (b>c)
        {
            cout<<"The maximum number is: "<<b<<endl;
        }
        else
        {
            cout<<"The maximum number is: "<<c<<endl;
            }
            return 0;
}
