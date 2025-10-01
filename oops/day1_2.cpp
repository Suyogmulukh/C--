/*
1. Create a class employee with empId, salary, name, gender, age and create 2 objects

*/

#include <iostream>
using namespace std;

class Employee {
    public:
        int empId;
        int salary;
        string name;
        int age;
        string gender;
};
int main()
{
    Employee P1;
    P1.empId = 13;
    P1.salary = 30000;
    P1.name = "Mansi";
    P1.age = 30;
    P1.gender = "female";

    
    Employee P2;
    P2.empId = 15;
    P2.salary = 45000;
    P2.name = "suyog";
    P2.age = 21;
    P2.gender = "male";

    cout << "Employee Infomation \n";
    cout << "empId = " << P1.empId << endl;
    cout << "Salary = " << P1.salary << endl;
    cout << "Name = " << P1.name << endl;
    cout << "Age = " << P1.age << endl;
    cout << "Gender = " << P1.gender << endl;

    cout << "---------------------------------------------------\n";

    cout << "Employee Infomation \n";
    cout << "empId = " << P2.empId << endl;
    cout << "Salary = " << P2.salary << endl;
    cout << "Name = " << P2.name << endl;
    cout << "Age = " << P2.age << endl;
    cout << "Gender = " << P2.gender << endl;
    
}