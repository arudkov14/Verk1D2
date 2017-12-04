#ifndef SALARY_RECORD_H
#define SALARY_RECORD_H
#include <string>
#include <fstream>

using namespace std;

class Salary_record
{
    public:
        Salary_record(string name, int SSN, int salary_this_month, int month, int year);
        string get_name();
        int get_SNN();
        int get_salary_this_month();
        int get_month();
        int get_year();

        friend ostream& operator <<(ostream& out, const Salary_record& salary);


    private:
        string _name;
        int _SSN;
        int _salary_this_month;
        int _month;
        int _year;

};

#endif // SALARY_RECORD_H
