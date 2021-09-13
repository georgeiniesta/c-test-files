#include <iostream>
#include <vector>//if changed for list f.e. we should #include <list> instead of vector

using namespace std;
//We could also change the data structure. f.e. list
int main()
{
    vector<int> v={2,4,6,8,10,12};
    v.push_back(20); //will add at last value
    v.push_back(30);

    //iterating values of our vector. Using iterator

    vector<int>::iterator itr;
    //Using iterator can even modify values. f.e. ++*itr, it would display 3,5...
    cout<<"Using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<endl;
    //Using for each loop
    cout<<"Using for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;

}
