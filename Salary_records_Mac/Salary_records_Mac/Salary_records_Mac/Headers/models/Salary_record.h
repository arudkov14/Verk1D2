//
//  Salary_record.hpp
//  Salary_records_Mac
//
//  Created by Kristófer Gudmundsson on 5.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Salary_record_h
#define Salary_record_h

#include <stdio.h>

#include <string>
#include <fstream>
#include <iostream>

using namespace std;
const int SSN_SIZE = 9;

class Salary_record
{
public:
    Salary_record(string name, string SSN, int salary_this_month, int month, int year);
    string get_name();
    string get_SNN();
    int get_salary_this_month();
    int get_month();
    int get_year();
    
    friend ostream& operator <<(ostream& out, const Salary_record& salary);
    
private:
    string _name;
    string _SSN;
    int _salary_this_month;
    int _month;
    int _year;
};

#endif /* Salary_record_h */
