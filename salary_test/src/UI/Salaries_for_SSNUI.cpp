#include "Salaries_for_SSNUI.h"

void Salaries_for_SSNUI::main_menu()
{
    cout << "Enter SSN: ";

    string ssn_input;
    cin >> ssn_input;

    salary_service.salaries_for_SSN(ssn_input); //Falli� (� Salary_service) sem f�r ssn og PRENTAR sal rec
}
