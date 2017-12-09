#ifndef SALARY_RECORD_H
#define SALARY_RECORD_H
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <cstdlib>


using namespace std;

class Salary_record
{
    public:
        Salary_record( );
        Salary_record(string name, string SSN, int salary_this_month, int month, int year);
        string get_name();
        string get_SNN();
        int get_salary_this_month();
        int get_month();
        int get_year();
        vector<Salary_record> sendToVector();


        friend ostream& operator <<(ostream& out, const Salary_record& salary);
        friend istream& operator >>(istream& in, Salary_record& salary);




    private:

        string name;
        string SSN;
        int salary_this_month;
        int month;
        int year;

};

#endif // SALARY_RECORD_H
