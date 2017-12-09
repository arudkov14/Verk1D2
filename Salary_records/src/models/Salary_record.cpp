#include "Salary_record.h"

Salary_record::Salary_record() {



}

Salary_record::Salary_record(string name, string SSN, int salary_this_month, int month, int year)
{
    this->name = name;
    this->SSN = SSN;
    this->salary_this_month = salary_this_month;
    this->month = month;
    this->year = year;


}

string Salary_record::get_name()
{
    return this->name;
}

string Salary_record::get_SNN()
{
    return this->SSN;
}

int Salary_record::get_salary_this_month()
{
    return this->salary_this_month;
}

int Salary_record::get_month()
{
    return this->month;
}

int Salary_record::get_year()
{
    return this->year;
}

ostream& operator<<(ostream& out, const Salary_record& salary)
{
    out << salary.name << endl;
    out << salary.SSN << endl;
    out << salary.salary_this_month << endl;
    out << salary.month << endl;
    out << salary.year << endl;
    out << endl;

    return out;
}

istream& operator >>(istream& in, Salary_record& salary)
{

    in >> salary.name;
    in >> salary.SSN;
    in >> salary.salary_this_month;
    in >> salary.month;
    in >> salary.year;

    return in;


}


vector<Salary_record> Salary_record::sendToVector() { // Þetta ætti að vera í repo

    vector<Salary_record> salary_records;
    Salary_record salaries;

    ifstream fin;
    fin.open("salary_files.txt");

    if(fin.is_open()) {
        //cout << "HIIII";
        while(fin >> salaries) {
            salary_records.push_back(salaries);
        }
      /*
        for (int i = 0; i < salary_records.size(); i++) {
            cout << "[" << i << "] " << salary_records[i] << endl;

        }
        */
    }

    fin.close();
    return salary_records;

}
