#ifndef SALARY_SERVICE_H
#define SALARY_SERVICE_H
#include "Salary_record.h"
#include <iostream>
#include "Salary_repo.h"
using namespace std;


class Salary_service
{
    public:
        void add_salary(const Salary_record& salary);

    private:
        Salary_repo salary_repo;
};

#endif // SALARY_SERVICE_H
