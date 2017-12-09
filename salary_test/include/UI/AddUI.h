#ifndef ADDUI_H
#define ADDUI_H
#include <string>
#include <iostream>
#include "Salary.h"
#include "Salary_service.h"
using namespace std;

class AddUI
{
    public:
        AddUI();
        virtual ~AddUI();

    private:
        Salary salary; //Af hverju er þetta private? :)
        Salary_service salary_service;
};

#endif // ADDUI_H
