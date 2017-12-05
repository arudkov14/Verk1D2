#include "Salary_service.h"


void Salary_service::add_salary(const Salary_record& salary)
{
    if(is_valid_salary(salary))
    {
        salary_repo.add_salary(salary);
    }
}

bool Salary_service::is_valid_salary(Salary_record salary)
{
    try
    {
        if(salary.get_month() > 12 || salary.get_month() < 1)
        {
            throw InvalidMonthException();
        }
        else if(salary.get_year() != 2017)
        {
            throw InvalidYearException();
        }
    }
    catch(InvalidMonthException e)
        {
            cout << "There is only 12 months";
            return false;
        }
    catch(InvalidYearException e)
    {
        cout << "Only 2017";
        return false;
    }

    return true;
}
