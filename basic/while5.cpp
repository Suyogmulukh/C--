
/*
1. WAP to  print fibonacci series till n
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    int i = 3;
    while (i <= n)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
        i++;
    }
}