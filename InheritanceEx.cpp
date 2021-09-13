#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
public:
    Employee (int i, string n)
    {
        id=i;
        name=n;
    }
    //As we just need to get names and ID we dont need setparam
    int getEmployeeID(){return id;}
    string getName(){return name;}
};
class FullTimeEmployee:public Employee
{
private:
    int salary;
public:
    FullTimeEmployee(int id,string n, int s):Employee(id,n)
    {
        salary=s;
    }
    int getSalary(){return salary;}

};
class PartTimeEmployee:public Employee
{
private:
    int wage;
public:
    PartTimeEmployee(int id, string n, int w):Employee(id, n)
    {
        wage=w;
    }
    int getWage(){return wage;}

};

int main()
{
    FullTimeEmployee e1(0001,"George",5000);
    PartTimeEmployee e2(0002,"Mike", 500);

    cout<<"Salary of "<<e1.getName()<<" with ID "<<e1.getEmployeeID()<<" is "<<e1.getSalary()<<endl;
    cout<<"Daily wage of "<<e2.getName()<<" with ID "<<e2.getEmployeeID()<<" is "<<e2.getWage()<<endl;
}
