#include <iostream>
using namespace std;

class Calculator{

    public:
    void Addition(int x , int y)
    {
        cout << "Addition of 2 integer number = " << x << ", " << y << " = " << x + y << endl;
    }
    void Addition(int x , int y ,int z)
    {
        cout << "Addition of 3 integer number = " << x << ", " << y << ", "<< z << " = " << x + y << endl;
    } 
    void Addition(int x , double y )
    {
        cout << "Addition of 2 decimal number int and double = " << x << ", " << y << " = " << x + y << endl;
    }
    void Addition(double x , int y )
    {
        cout << "Addition of 2 decimal number double and int = " << x << ", " << y << " = " << x + y << endl;
    }
    void Addition(double x , double y )
    {
        cout << "Addition of 2 decimal number double and double = " << x << ", " << y << " = " << x + y << endl;
    }
    void Addition(double x , double y ,int z)
    {
        cout << "Addition of 3 decimal number double, double and int = " << x << ", " << y <<", "<< z << " = " << x + y << endl;
    }
};

int main()
{
    Calculator *ptr = new Calculator();
    ptr->Addition(4, 6);
    ptr->Addition(10, 8, 2);
    ptr->Addition(3.5, 8);
    ptr->Addition(8, 3.2);
    ptr->Addition(3.4, 2.1);
    ptr->Addition(32.4, 2.43, 2);
}