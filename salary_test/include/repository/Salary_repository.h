#ifndef SALARY_REPOSITORY_H
#define SALARY_REPOSITORY_H
#include <fstream>
using namespace std;
#include "Salary.h"
#include <vector>

class Salary_repository
{
    public:
        Salary_repository();
        virtual ~Salary_repository();
        void add_to_file(const Salary& salary);
        vector<Salary> add_to_vector();

    private:
};

#endif // SALARY_REPOSITORY_H
