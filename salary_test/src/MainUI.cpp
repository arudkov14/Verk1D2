#include "MainUI.h"

MainUI::MainUI()
{
    cout << "Choose action:" << endl;
    cout << "1: Add a salary record" << endl;
    cout << "2: Get all records for a given SSN" << endl;
    cout << "3: Get a total salary for a given year and a given SSN." << endl;
    cout << "4: Get the name of the employee with the highest salary for a given year." << endl;

    char action;
    cin >> action;

    if (action == '1') {
        AddUI addui;
    }
    else if (action == '2') {
        Salaries_for_SSNUI salaries_for_ssnui; //Leitar að salary record fyrir gefið SSN.
        salaries_for_ssnui.main_menu();
    }
    else if (action == '3') {
        Total_salaryUI total_salaryui;
        total_salaryui.main_menu();
    }
    else if (action == '4') {

    }
}

MainUI::~MainUI()
{
    //dtor
}

