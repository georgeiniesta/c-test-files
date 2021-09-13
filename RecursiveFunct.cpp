#include <iostream>
using namespace std;

void fun(int n)
{
    if (n>15)
    {
        cout<<n<<endl;
        fun(n-3);
    }
}

int main()
{
    int x=50;
    fun(x);
}
