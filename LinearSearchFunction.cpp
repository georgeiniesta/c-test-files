#include <iostream>
using namespace std;

int Search(int A[],int n, int key)
{
    for (int i=0;i<n;i++)
        if (key==A[i]) //for comparing and finding key
            return i; //gives output as index no
        return 0; //Finishes prog when found//

}

int main()
{
    int A[]={2,4,6,8,10,12};
    int k;

    cout<<"Enter Element to search"<<endl;
    cin>>k;
    int index=Search(A,10,k);

    cout<<"Found at index: "<<index<<endl;


}
