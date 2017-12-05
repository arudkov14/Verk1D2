//
//  Salary_service.hpp
//  Salary_records_Mac
//
//  Created by Kristófer Gudmundsson on 5.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Salary_service_h
#define Salary_service_h

#include <stdio.h>

#include "Salary_record.h"
#include <iostream>
#include "Salary_repo.h"
using namespace std;


class Salary_service
{
public:
    void add_salary(const Salary_record& salary);
    
private:
    Salary_repo salary_repo;
};

#endif /* Salary_service_h */
