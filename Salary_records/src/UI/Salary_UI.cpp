#include "Salary_UI.h"





void Salary_UI::main_menu()
{
    cout << "Hello here you can add a salary record: " << endl;

    string name, SSN;
    int salary_this_month, month, year;

    string dummy;
    getline(cin, dummy);
    cout << "Name: ";
    getline(cin, name);
    cout << "SSN: ";
    cin >> SSN;
    cout << "Salary this month: ";
    cin >> salary_this_month;
    cout << "Month (as a number): ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    Salary_record salary(name, SSN, salary_this_month, month, year);
    service.add_salary(salary);

    vector<Salary_record> salaries = salary_repo.sendToVector(); // Þetta má ekki. Ekki repo hér.

    string leit;
    vector<Salary_record> fann;
    for (int i = 0; i < salaries.size(); i++) {
        cout << salaries[i];
        if(salaries[i].SSN == leit){
            fann.push_back(salaries[i]);
        }
    }



}
