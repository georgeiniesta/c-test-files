#include <iostream>
using namespace std;

class complexNo
{
public:
    int real,img;

    complexNo operator+(complexNo c)//Operator + overload
    {
        complexNo temp;

        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};

int main()
{
    complexNo c1,c2,c3;
    c1.real=3;
    c1.img=3;
    c2.real=5;
    c2.img=7;

    c3= c1+c2;
    cout<<c3.real<<" + "<<c3.img<<" i"<<endl;
}
