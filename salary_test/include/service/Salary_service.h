#ifndef SALARY_SERVICE_H
#define SALARY_SERVICE_H
#include <iostream>
#include <string>
using namespace std;
#include "Salary.h"
#include "Salary_repository.h"
#include "InvalidNameException.h"
#include "InvalidSSNException.h"
#include "InvalidSalaryThisMonthException.h"
#include "InvalidMonthException.h"
#include "InvalidYearException.h"

class Salary_service
{
    public:
        Salary_service();
        virtual ~Salary_service();
        void add_salary(Salary& salary);
        bool validate_salary(Salary& salary);
        vector<Salary> salaries();                     //B�r til vectorinn yfir �llum launum.
        void salaries_for_SSN(string ssn_input);       //Vector launa fyrir tilteki� ssn (SPURNING ME� VOID OG COUT?).
        void date_input(Salary& salary);               //SKO�A: Athugar m�nu� og yfirskrifar ef launam�nu�urinn er til.

        int total_salary(string snn_input, int year_input);

    private:
        Salary_repository salary_repository;
};

#endif // SALARY_SERVICE_H
