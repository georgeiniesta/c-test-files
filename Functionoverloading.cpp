//Overload function to add numbers//
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
float sum (float a, float b)
{
    return a+b;
}
float sum (float a, float b, float c)
{
    return a+b+c;
}

int main()
{
    cout<<sum(10,9)<<endl;
    cout<<sum(10.1f,15.98f)<<endl;//Be careful to take float value #f must be present//
    cout<<sum(15.4f,186567.48f, 59.4f)<<endl;

    return 0;
}
