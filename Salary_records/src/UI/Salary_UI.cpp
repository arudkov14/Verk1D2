#include "Salary_UI.h"





void Salary_UI::main_menu()
{
    cout << "Hello here you can add a salary record: " << endl;

    string name, SSN;
    int salary_this_month, month, year;

    cout << "Name: ";
    getline(cin, name);
    cout << "SSN: ";
    cin >> SSN;
    cout << "Salary this month: ";
    cin >> salary_this_month;
    cout << "Month(as a number): ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    vector<Salary_record> salaries = salary_repo.sendToVector();

    Salary_record salary(name, SSN, salary_this_month, month, year);
    service.add_salary(salary);
}
