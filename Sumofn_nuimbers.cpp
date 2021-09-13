#include <iostream>
//This program finds the sum of First n Natural numbers //
//Formula = Sum = n*(n+1)/2

using namespace std;

int main()
{
    int sum, n;

    cout<<"Enter n: ";
    cin>>n;
    sum= (n*(n+1))/2;
    cout<<"Sum is: "<< sum;
    return 0;
}
