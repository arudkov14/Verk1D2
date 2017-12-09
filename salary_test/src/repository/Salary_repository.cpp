#include "Salary_repository.h"

Salary_repository::Salary_repository()
{

}

void Salary_repository::add_to_file(const Salary& salary)
{
    ofstream fout;

    fout.open("salary_file.txt", ios::app);

    if (fout.is_open()) {
        fout << salary;
        fout.close();
    }
}

vector<Salary> Salary_repository::add_to_vector()
{
    vector<Salary> salary_record;
    Salary salaries;

    ifstream fin;

    fin.open("salary_file.txt", ios::app);

    while (fin >> salaries) {
        salary_record.push_back(salaries);
    }
    fin.close();

    return salary_record;
}

Salary_repository::~Salary_repository()
{
    //dtor
}
