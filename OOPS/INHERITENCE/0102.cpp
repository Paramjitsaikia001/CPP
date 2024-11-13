// write the program for inheritence using array of an object

#include <iostream>
using namespace std;
class employee
{
protected:
    int emp_id;
    char ename[20], edesign[20];

public:
    void get_employ_data()
    {
        cout << "enter the employee id :";
        cin >> emp_id;
        cout << "enter the employee name :";
        cin >> ename;
        cout << "enter the designation: ";
        cin >> edesign;
    }
};

class salary : public employee
{
protected:
    float bp, hra, da, gross;

public:
    void get_salary_data()
    {
        cout << "enter the basic salary :";
        cin >> bp;
        cout << "enter the hra :";
        cin >> hra;
        cout << "enter the dearness awareness :";
        cin >> da;
        gross = bp + hra + da;
    }
    void display_data()
    {
        cout << "Employee Id: " << emp_id << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Employee designation: " << edesign << endl;
        cout << "Employee basic salary: " << bp << endl;
        cout << "Employee house rent awareness: " << hra << endl;
        cout << "Employee dearness awareness: " << da << endl
             << endl;
        cout << "Employee gross salary: " << gross << endl;
    }
};

int main()
{
    salary e[10];
    int i, n;
    cout << "enter the no. of employee: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter the details of employee no " << i + 1<<"\n";
        e[i].get_employ_data();
        e[i].get_salary_data();
    }
    for (i = 0; i < n; i++)
    {
        cout << "details of employee no " << i + 1 << " is :\n";
        e[i].display_data();
    }
    return 0;
}