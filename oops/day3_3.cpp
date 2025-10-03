
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
    Person()
    {
        cout << "Default constructor of Person\n";
    }
    Person(string name, string gender, int age)
    {
        cout << "Parameterized constructor of Person is called\n";
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

// Derived Class
class Employee : public Person
{
    int empId;
    double salary;

public:
    Employee()
    {
        cout << "Default constructor of Employee\n";
    }
    Employee(int empId, string name, int age, string gender, double salary)
        : Person(name, gender, age)
    {
        cout << "Parameterized constructor of Employee\n";
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
};

int main()
{
    Employee e1(1022, "soham shinde", 20, "Male", 22300);
    e1.displayData();
}