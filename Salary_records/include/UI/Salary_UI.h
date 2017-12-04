#ifndef SALARY_UI_H
#define SALARY_UI_H
#include <string>
#include <iostream>
#include <Salary_service.h>

using namespace std;

class Salary_UI
{
    public:
        void main_menu();

    private:
        Salary_service service;
};

#endif // SALARY_UI_H
