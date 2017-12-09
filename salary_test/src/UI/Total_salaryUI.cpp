#include "Total_salaryUI.h"

Total_salaryUI::main_menu()
{
    cout << "Enter SSN: ";

    string ssn_input;
    cin >> ssn_input;

    cout << "Enter year: ";

    int year_input;
    cin >> year_input;

    cout << salary_service.total_salary(ssn_input, year_input);
}
