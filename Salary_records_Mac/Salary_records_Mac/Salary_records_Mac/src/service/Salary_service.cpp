//
//  Salary_service.cpp
//  Salary_records_Mac
//
//  Created by Kristófer Gudmundsson on 5.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Salary_service.h"

void Salary_service::add_salary(const Salary_record& salary)
{
    if (is_valid_salary(salary)) {
        salary_repo.add_salary(salary);
    }
}

bool Salary_service::is_valid_salary(const Salary_service& salary) {
    
    
}
