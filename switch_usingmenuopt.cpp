#include <iostream>
using namespace std;

int main()
{
    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Subtraction\n"<<"3. Mult\n"<<"4. Div \n";

    int option;
    cout<<"Please enter your choice\n\n\n";
    cin>>option;
    float a,b,c;
    if (option >4 || option<0)
    {
        cout<<"Please enter a valid choice\n";
    }
    else{
    cout<<"Please give me two numbers\n";
    cin>>a>>b;
    switch (option)
    {
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
        case 4: c= a/b;
        break;
        default: cout<<"Please enter a valid option";
        break;
    }
    cout<<"Result is: "<<c<<endl;

    }
    return 0;
}
