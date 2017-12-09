#include "Salaries_for_SSNUI.h"

void Salaries_for_SSNUI::main_menu()
{
    cout << "Enter SSN: ";

    string ssn_input;
    cin >> ssn_input;

    salary_service.salaries_for_SSN(ssn_input); //Fallið (í Salary_service) sem fær ssn og PRENTAR sal rec
}
