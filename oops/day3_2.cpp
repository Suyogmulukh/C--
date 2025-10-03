#include <iostream>

using namespace std;

class person
{
protected:
    string name;
    int age;
    string gender;

public:
    person()
    {
        cout << "Default constructor of a person\n";
    }

    person(string name, int age, string gender)
    {
        cout << "Parameterized constructor of a person";
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    void displayData()
    {
        cout << "~~~~~~Person Information~~~~~~\n";
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Age = " << age << endl;
    }
};

// inheritances

class Employee : public person
{
    int empId;
    double salary;

    public:
    Employee()
    {
        cout << "Default constructor of a Employee";
    }
    Employee(int empId, string name, int age ,string gender, double salary) : person(name, age, gender)
    {
        cout << "Parameterized cosntructor of Employee\n";
        this->empId = empId;
        this->salary = salary;
    }
    void displayData(){
        cout << "~~~~~~Employee Information~~~~~~\n";
        cout << "Emp id = " << empId << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Employee p1( 1001, "sahil sharma", 20, "male", 2300);
    p1.displayData();
    
}
