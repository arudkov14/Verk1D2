#ifndef SALARY_SERVICE_H
#define SALARY_SERVICE_H
#include "Salary_record.h"
#include <iostream>
#include "Salary_repo.h"
#include "InvalidMonthException.h"
#include "InvalidYearException.h"
using namespace std;


class Salary_service
{
    public:
        void add_salary(const Salary_record& salary);
        bool is_valid_salary( Salary_record salary);

    private:
        Salary_repo salary_repo;
};

#endif // SALARY_SERVICE_H
