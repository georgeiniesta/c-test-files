#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Please give me a year\n";
    cin>>year;

    if (year%100==0)
    {
        cout<<"It is a century year\n";
        if (year%400==0)
        {
            cout<<"This is also a leap year\n";
        }
        else
        {
            cout<<"Not a leap year";
        }
    }
    else
    {
        cout<<"Normal year\n";
        if (year%4==0)
        {
            cout<<"Leap year";

        }
        else
        {
            cout<<"Not leap year";
        }
    }
    return 0;
}
