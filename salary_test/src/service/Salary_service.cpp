#include "Salary_service.h"

Salary_service::Salary_service()
{

}

Salary_service::~Salary_service()
{
    //dtor
}

int Salary_service::total_salary(string snn_input, int year_input)
{
    int total_salary = 0;
    vector<Salary> all_salaries = salary_repository.add_to_vector();

    for (int i = 0; i < all_salaries.size(); i++) {
        if (all_salaries[i].get_ssn() == snn_input && all_salaries[i].get_year() == year_input) {
            total_salary += all_salaries[i].get_salary_this_month();
        }
    }

    return total_salary;
}

void Salary_service::salaries_for_SSN(string ssn_input) // Tekur ssn og skilar sal rec
{
    vector<Salary> all_salaries = salary_repository.add_to_vector();    //Vector með öllum launaskráningum úr skrá

    vector<int> salaries_for_SSN;   // Nýr tómur vector

    for (unsigned int i = 0; i < all_salaries.size(); i++) {    // Ítrar í gegnum vectorinn með öllum laununum
        if (all_salaries[i].get_ssn() == ssn_input) {           // Ef ssn matchar:
            salaries_for_SSN.push_back(all_salaries[i].get_salary_this_month());    //Bætir salary við nýja vec
        }
    }

    for (int i = 0; i < salaries_for_SSN.size(); i++) {     //Prentar út hvern launalið fyrir sig.
        cout << salaries_for_SSN[i] << endl;
    }
}

vector<Salary> Salary_service::salaries()
{
    return salary_repository.add_to_vector();
}

void Salary_service::add_salary(Salary& salary)
{
    date_input(salary); //SKOÐA
    if (validate_salary(salary)) {
        salary_repository.add_to_file(salary);
    }
}

void Salary_service::date_input(Salary& salary) //SKOÐA
{
    vector<Salary> all_salaries = salary_repository.add_to_vector();

    for (unsigned int i = 0; i < all_salaries.size(); i++) {
        if (all_salaries[i].get_ssn() == salary.get_ssn()){
            if (all_salaries[i].get_month() == salary.get_month()){
                all_salaries[i] = salary;
            }
        }
    }
}

bool Salary_service::validate_salary(Salary& salary) //Athugar hvort salary sé rétt.
{
    try
    {
        // Try name:
        string name = salary.get_name();
        for (unsigned int i = 0; i < name.length(); i++) {
            if (name[i] != ' ' && !isalpha(name[i])) {
                throw InvalidNameException(); //Ef str innih staf sem er ekki bókstafur þá kastast hann.
            }
        }

        //Try ssn:
        string ssn = salary.get_ssn();
        if (ssn.length() != 10) {
            throw InvalidSSNException();
        }
        for (int i = 0; i < ssn.length(); i++) {
            if (isalpha(ssn[i])) {
                throw InvalidSSNException();
            }
        }

        //Try salary:
        int salary_this_month = salary.get_salary_this_month();
        if(salary_this_month < 0)
        {
            throw InvalidSalaryThisMonthException();
        }

        //Try month:
        if(salary.get_month() > 12 || salary.get_month() < 1)
        {
            throw InvalidMonthException();
        }

        //Try year:
        if(salary.get_year() != 2017)
        {
            throw InvalidYearException();
        }
    }

    catch (InvalidNameException e)
    {
        cout << "Invalid name." << endl;
        return false;
    }
    catch (InvalidSSNException e)
    {
        cout << "Invalid SSN." << endl;
        return false;
    }
    catch (InvalidMonthException e)
    {
        cout << "Invalid month." << endl;
        return false;
    }
    catch (InvalidYearException e)
    {
        cout << "Invalid year." << endl;
        return false;
    }
}
