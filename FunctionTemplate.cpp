#include <iostream>
using namespace std;

template <class T> //define T//
T maxin(T a, T b) //Now int and float, etc works //
{
    return a>b?a:b; //? otherwise : b

}

int main()
{
    cout<<maxin(12,15)<<endl;
    cout<<maxin(1.3f,56.7f)<<endl;
    return 0;
}
