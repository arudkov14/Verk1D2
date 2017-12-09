#ifndef SALARIES_FOR_SSNUI_H
#define SALARIES_FOR_SSNUI_H

#include <iostream>

using namespace std;
#include "Salary_service.h"

class Salaries_for_SSNUI
{
    public:
        void main_menu();

    private:
        Salary_service salary_service;      //Búum til tilvik af service klasa til að geta notað fall þar inni
};

#endif // SALARIES_FOR_SSNUI_H
