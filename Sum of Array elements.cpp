#include <iostream>
using namespace std;

int main()
{
    int A[5]={4,8,7,6,8};//expected sum is 33//
    int n=5, sum=0;

    for (int i=0;i<5;i++)
    {
        sum+=A[i];
    }
    cout<<"Sum is "<<sum;
    return 0;
}
