#include <iostream>
//i=i+1  is the same as i+=1 equal to i++
using namespace std;

int main()
{
    int i=5, j, k=5,g;
    j= i++;
    g= ++k;
    cout<<i<<"  "<<j<<"  "<<k<< " "<<g<<endl;


    return 0;
}
