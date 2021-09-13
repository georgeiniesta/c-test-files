#include <iostream>
using namespace std;
//net=basic+basic*per of all-basic*perc of ded//
int main()
{
    float net_salary, basic_salary, percentage_of_allowances, percentage_of_deductions;

    cout<<"Please give me your Basic Salary: ";
    cin>>basic_salary;
    cout<<"Please give me the Percentage of Allowances: ";
    cin>>percentage_of_allowances;
    cout<<"Please give me the Percentage of Deductions: ";
    cin>>percentage_of_deductions;

    net_salary = basic_salary+(basic_salary*percentage_of_allowances/100)-(basic_salary*percentage_of_deductions/100);

    cout<<"Your Net Salary is: "<<net_salary<<endl;

    return 0;
}
