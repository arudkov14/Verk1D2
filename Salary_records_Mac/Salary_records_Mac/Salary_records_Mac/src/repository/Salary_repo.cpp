//
//  Salary_repo.c
//  Salary_records_Mac
//
//  Created by Kristófer Gudmundsson on 5.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Salary_repo.h"

void Salary_repo::add_salary(const Salary_record& salary)
{
    ofstream fout;
    fout.open("/Users/kristofergudmundsson/Desktop/salary_files.txt", ios::app);
    if(fout.is_open())
    {
        fout << salary;
        
        fout.close();
    }
}
