#include "Salary_record.h"

Salary_record::Salary_record(string name, int SSN, int salary_this_month, int month, int year)
{
    this->_name = name;
    this->_SSN = SSN;
    this->_salary_this_month = salary_this_month;
    this->_month = month;
    this->_year = year;
}

string Salary_record::get_name()
{
    return this->_name;
}

int Salary_record::get_SNN()
{
    return this->_SSN;
}

int Salary_record::get_salary_this_month()
{
    return this->_salary_this_month;
}

int Salary_record::get_month()
{
    return this->_month;
}

int Salary_record::get_year()
{
    return this->_year;
}

ostream& operator<<(ostream& out, const Salary_record& salary)
{
    out << salary._name << endl;
    out << salary._SSN << endl;
    out << salary._salary_this_month << endl;
    out << salary._month << endl;
    out << salary._year << endl;

    return out;
}
