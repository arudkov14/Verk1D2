//
//  Salary_UI.hpp
//  Salary_records_Mac
//
//  Created by Kristófer Gudmundsson on 5.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Salary_UI_h
#define Salary_UI_h

#include <stdio.h>

#endif /* Salary_UI_h */

#include <string>
#include <iostream>
#include "Salary_service.h"

using namespace std;

class Salary_UI
{
public:
    void main_menu();
    
private:
    Salary_service service;
};
