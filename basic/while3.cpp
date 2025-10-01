#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "enter a number ";
    cin >> n;

    int i = 1;
    int sum = 0;
    while (i < n)
    {
        if ( n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
    {
        cout << "Number = " << n << " is a perfect number \n";
    }
    else{
        cout << "Number = " << n << " is a not perfect number , Since sum = " << sum << " is not equal to number " << n << endl;
    }
}