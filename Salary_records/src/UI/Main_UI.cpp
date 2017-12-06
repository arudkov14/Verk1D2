#include "Main_UI.h"

Main_UI::Main_UI()
{
    //ctor
}

void Main_UI::startUI()
{
    char selection;
    do {
        cout << "============================" << endl;
        cout << "====\t MainUI \t====" << endl;
        cout << "============================" << endl << endl;


        cout << "1: Add salary record" << endl;
        cout << "2: Get all records for a given SSN" << endl;
        cout << "3: Get a total salary for a given year and a given ssn" << endl;
        cout << "4: Get the name of the employee with the highest salary" << endl;
        cout << "q: to exit program" << endl;

        cin >> selection;


        if (selection == '1') {
            Salary_UI salary_ui;
            salary_ui.main_menu();
        }
        else if (selection == '2') {


        }



    }while(selection != 'q');





}
