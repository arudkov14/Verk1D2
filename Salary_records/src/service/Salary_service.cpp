#include "Salary_service.h"


void Salary_service::add_salary(const Salary_record& salary)
{
    salary_repo.add_salary(salary);
}
