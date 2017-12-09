#include "Salary.h"

Salary::Salary()
{
    //ctor
}

Salary::~Salary()
{
    //dtor
}

Salary::Salary(string name, string ssn, int salary_this_month, int month, int year)
{
    this->name = name;
    this->ssn = ssn;
    this->salary_this_month = salary_this_month;
    this->month = month;
    this->year = year;
}

ostream& operator<<(ostream& out, const Salary& salary)
{
    out << salary.name << endl;
    out << salary.ssn << endl;
    out << salary.salary_this_month << endl;
    out << salary.month << endl;
    out << salary.year << endl;
    return out;
}

istream& operator >>(istream& in, Salary& salary)
{
    in >> salary.name;
    in >> salary.ssn;
    in >> salary.salary_this_month;
    in >> salary.month;
    in >> salary.year;
    return in;
}

string Salary::get_name()
{
    return name;
}

string Salary::get_ssn()
{
    return ssn;
}

int Salary::get_salary_this_month()
{
    return salary_this_month;
}

int Salary::get_month()
{
    return month;
}

int Salary::get_year()
{
    return year;
}
