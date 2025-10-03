#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string gender;

public:
    Person()
    {
        cout << "Default cosntructor of person\n";
    }

    // getters / setters
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }

    void setName(int n)
    {
        age = n;
    }
    int getsName()
    {
        return age;
    }
    
};
int main()
{
    Person p1;
    Person p2;

    p1.setName("suyog mulukh");
    p1.setName(21);

    cout << "person Info\n";
    cout << "Name = " << p1.getName() << endl;
    cout << "Age = " << p1.getsName() << endl;
    
}