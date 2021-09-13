#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,det;

    cout<<"Give me the values of a,b,c in that order: "<<endl;
    cin>>a>>b>>c;

    det= b*b-(4*a*c);



    if (det==0)
    {
        cout<<"Your roots are real and equal. Your roots are: "<<(-b+sqrt(det))/(2*a)<<endl;
    }
    else if (det > 0)
    {
        cout<<"Your roots are real but unequal"<<endl;
        cout<<"Your first root is: "<<(-b+sqrt(det))/(2*a)<<endl;
        cout<<"Your second root is: "<<(-b-sqrt(det))/(2*a)<<endl;
    }
    else
    {
        cout<<"Your roots are imaginary. I cant do this sorry"<<endl;

    }
    return 0;
}
