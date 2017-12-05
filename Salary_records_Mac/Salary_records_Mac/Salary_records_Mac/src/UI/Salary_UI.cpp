//
//  Salary_UI.c
//  Salary_records_Mac
//
//  Created by Kristófer Gudmundsson on 5.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Salary_UI.h"

//const int SSN_SIZE = 9;

void Salary_UI::main_menu()
{
    cout << "Hello here you can add a salary record: " << endl;
    
    string input_name;
    string name, SSN;
    int salary_this_month, month, year;
    
    cout << "Name: ";
    try {
        cin >> input_name;
        if (is_name_valid()) {
            name = input_name;
        }
        catch {
            
        }
    }

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
}
