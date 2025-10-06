
/*
1. Person
2. Employee -> empId, salary
3. PartEmployee : Employee - constructor parameterized -> dailyWage, numOfDays -> salary (dailyWage * numOfDays)
*/

#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;
    string gender;

public:
    
    Person(string name, string gender, int age)
    {
        this->name = name;
        this->gender = gender;
        this->age = age;
    }
    void displayData()
    {
        cout << "~~~~~~Person Information~~~~~~\n";
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Age = " << age << endl;
    }
};

class Employee : public Person
{
    protected:
    int empId;
    double salary;

public:
    
    Employee(int empId, string name, int age, string gender, double salary)
        : Person(name, gender, age)
    {
        this->empId = empId;
        this->salary = salary;
    }
    void displayData()
    {
        Person::displayData();
        cout << "~~~~~~Employee Information~~~~~~\n";
        cout << "Emp id = " << empId << endl;
        cout << "Salary = " << salary << endl;
    }
    void deductTax()
    {
        if (salary > 15000)
        {
            double deductedAmount = 0.1 * salary;
            cout << "Amount deducted from your salary as tax is: " << deductedAmount << endl;
            salary = salary - deductedAmount;
        }
        else
        {
            cout << "No tax deducted \n";
        }
    }
};
class PartEmployee : public Employee
{
    double dailyWage;
    int numOfDays;

public:
    PartEmployee(int empId, string name, int age, string gender, double dailyWage, int numOfDays)
        : Employee(empId, name, age, gender , (dailyWage * numOfDays) )
    {
        this->dailyWage = dailyWage;
        this->numOfDays = numOfDays;
    }
    void displayData()
    {
        Employee::displayData();
        cout << "~~~~~~PartEmployee Information~~~~~~\n";
        cout << "dailyWages = " << dailyWage << endl;
        cout << "numOfDays = " << numOfDays << endl;
    }
    // function overriding
    void deductTax()
    {
        cout << "No tax for part employee\n";
    }
};

int main()
{
    // I want to deduct salary if its an employee object
    Employee e1(102, "Divesh Hodbe", 21, "male", 60000);
    e1.deductTax();
    e1.displayData();
    cout << "-----------------------------------------------\n";

    PartEmployee pe1(1022, "soham shinde", 20, "Male", 1000, 30);
    pe1.deductTax();
    pe1.displayData();
}