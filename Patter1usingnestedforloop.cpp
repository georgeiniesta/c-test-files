#include <iostream>
using namespace std;

int main()
{
    int counting=1;

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<counting<<" ";
            counting++;
        }
        cout<<endl;
    }

}
