#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream &operator<<(ofstream &ofs,Student &s);
    friend ifstream &operator>>(ifstream &ifs,Student &s);
};
//Overload  << operator
ofstream & operator<< (ofstream &ofs,Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;

    return ofs;
}
//Overload >> operator
ifstream &operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;

    return ifs;
}

int main()
{
    //creating object
    Student s1;
    s1.name="George";
    s1.roll=25;
    s1.branch="CS";

    //storing
    ofstream ofs("Student.txt", ios::trunc);
   /* ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
    */
    //using operator overloades
    ofs<<s1;

    //closing program
    ofs.close();
    //Reading data
    ifstream ifs("Student.txt");
    ifs>>s1;

    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;

    ifs.close();
}
