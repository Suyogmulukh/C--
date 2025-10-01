#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
        string gender;
};
int main()
{
    Person P1;
    P1.name = "sprk tech";
    P1.age = 30;
    P1.gender = "female";

    
    Person P2;
    P2.name = "suyog";
    P2.age = 21;
    P2.gender = "male";

    cout << " Persone Infomation \n";
    cout << "Name = " << P1.name << endl;
    cout << "Age = " << P1.age << endl;
    cout << "Gender = " << P1.gender << endl;

    
    cout << " Persone Infomation \n";
    cout << "Name = " << P2.name << endl;
    cout << "Age = " << P2.age << endl;
    cout << "Gender = " << P2.gender << endl;
        
}