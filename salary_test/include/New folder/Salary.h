#ifndef SALARY_H
#define SALARY_H
#include <string>
#include <iostream>
using namespace std;

class Salary
{
    public:
        Salary();
        Salary(string name, string ssn, int salary_this_month, int month, int year);
        virtual ~Salary();
        friend ostream& operator <<(ostream& out, const Salary& salary);
        friend istream& operator >>(istream& in, Salary& salary);

        string get_name();
        string get_ssn();
        int get_salary_this_month();
        int get_month();
        int get_year();

    private:
        string name;
        string ssn;
        int salary_this_month;
        int month;
        int year;
};

#endif // SALARY_H
