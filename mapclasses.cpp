#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> n;
    n.insert(pair<int,string>(1, "George"));
    n.insert(pair<int,string>(2, "Gina"));
    n.insert(pair<int,string>(3, "Georgio"));

    map<int,string>::iterator itr;
    for (itr=n.begin();itr!=n.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    //searching for a value
    map<int,string>::iterator itr2;
    itr2=n.find(2);
    cout<<"Value found, it is: "<<itr2->first<<" "<<itr2->second<<endl;
}
