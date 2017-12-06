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
        {                                                       //checks if inputed month is valid
            throw InvalidMonthException();
        }
        else if(salary.get_year() != 2017)
        {
            throw InvalidYearException();                       //checks if this is current year
        }

        string SSN = salary.get_SNN();
        if(SSN.length()!= 10)
        {                                                       //checks length of SSN
            throw InvalidSSNException();
        }
        for(int i = 0; i < SSN.length(); i++)
        {
            if(isalpha(SSN[i]))                                 //checks if there are any letters in SSN
            {
                throw InvalidSSNException();
            }
        }
        string name = salary.get_name();
        for(unsigned int i = 0; i < name.length(); i++)
        {                                                       //checks if Name contains anything other than letters
            if(name[i] != ' ' && !isalpha(name[i]))
            {
                throw InvalidNameException();
            }
        }
        int salary_this_month = salary.get_salary_this_month();
        if(salary_this_month < 0)
        {
            throw InvalidSalaryThisMonthException();
        }
        else if(isalpha(salary_this_month))
        {
            throw InvalidSalaryThisMonthException();
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
    catch(InvalidSSNException e)
    {
        cout << "SSN is supposed to be 10 digits";
        return false;
    }
    catch(InvalidNameException e)
    {
        cout << "Name can´t contain numbers";
        return false;
    }
    catch(InvalidSalaryThisMonthException e)
    {
        cout << "Salary this month can´t be negative or contain letters";
        return false;
    }

    return true;
}
