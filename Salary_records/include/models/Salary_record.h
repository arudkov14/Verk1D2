#ifndef SALARY_RECORD_H
#define SALARY_RECORD_H
#include <string>


class Salary_record
{
    public:
        Salary_record();



    private:
        string name;
        int SSN;
        int salary_this_month;
        int month;
        int year;

};

#endif // SALARY_RECORD_H
