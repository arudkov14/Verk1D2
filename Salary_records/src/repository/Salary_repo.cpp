#include "Salary_repo.h"



void Salary_repo::add_salary(const Salary_record& salary)
{
    ofstream fout;
    fout.open("salary_files.txt", ios::app);
    if(fout.is_open())
    {
        fout << salary;

        fout.close();
    }
}
