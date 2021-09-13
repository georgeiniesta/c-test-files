#include <iostream>
using namespace std;
//create class student for grades
//Ask: rollno, name, marks for 3 subjects.
//give total for grades, grade-> A>60, 40>B<60, C<40

//Creating Student class//
class Student
{
private:
    int rollNo;
    string name;
    int mathMarks;
    int chemMarks;
    int physMarks;
//Will write functions outside//
public:
    Student(int r,string n, int m, int c, int p) //created for object that will be used in main funct//
    {
        rollNo=r;
        name=n;
        mathMarks=m;
        chemMarks=c;
        physMarks=p;
    }
    int total();
    char grade();


};
int Student::total()
    {
        return mathMarks+physMarks+chemMarks;
    }
char Student::grade()
    {
        float average= Student::total()/3;
        if (average > 60)
            return 'A';
        else if (average>=40 && average<60)
            return 'B';
        else
            return 'C';
    }
int main()
{
    int rollno;
    string name;
    int m,p,c;

    cout<<"Enter Roll Number of the student: "<<endl;
    cin>>rollno;
    cout<<"Enter Name of the Student: "<<endl;
    cin>>name;
    cout<<"Enter grades of Math, Chem, Phys: "<<endl;
    cin>>m>>c>>p;

    Student s(rollno,name,m,c,p); //creates student object and passes our values//
    cout<<"The Total of "<<name<<" is: "<<s.total()<<endl;
    cout<<"Grade of Student "<<name<<" is: "<<s.grade()<<endl;
}
