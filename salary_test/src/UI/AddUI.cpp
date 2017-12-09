#include "AddUI.h"

AddUI::AddUI()
{
    string name, ssn;
    int salary_this_month, month, year;

    cout << "Enter salary:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "SSN: ";
    cin >> ssn;
    cout << "Salary: ";
    cin >> salary_this_month;
    cout << "Month (as a number): ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    Salary salary(name, ssn, salary_this_month, month, year);

    salary_service.add_salary(salary);
}

AddUI::~AddUI()
{
    //dtor
}
