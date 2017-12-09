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
        vector<Salary> salaries();                     //Býr til vectorinn yfir öllum launum.
        void salaries_for_SSN(string ssn_input);       //Vector launa fyrir tiltekið ssn (SPURNING MEÐ VOID OG COUT?).
        void date_input(Salary& salary);               //SKOÐA: Athugar mánuð og yfirskrifar ef launamánuðurinn er til.

        int total_salary(string snn_input, int year_input);

    private:
        Salary_repository salary_repository;
};

#endif // SALARY_SERVICE_H
