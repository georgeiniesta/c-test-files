#include <iostream>
using namespace std;

int main()
{
    string name;

    cout<<"What is your name? ";
    getline(cin,name);
    cout<<"Welcome Mr(s) "<< name;

    return 0;
}
