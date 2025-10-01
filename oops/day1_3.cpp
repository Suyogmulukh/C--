// 2. Create a class student with rollNo, name, gender, age, and array of marks of size 5
//    Create 2 student object display their info and marks and display sum and average marks

#include <iostream>
using namespace std;

class Student {
    public:
        int rollNo;
        string name;
        int age;
        string gender;
        int marks[5];
        int sum;
        float avg;
        void getSumAndAvg() {
            sum = 0;
            for(int i = 0; i < 5; i++) {
                sum += marks[i];
            }
            avg = sum / 5.0;
        }
};
int main()
{
    Student S1;
    S1.rollNo = 13;
    S1.name = "sahil";
    S1.age = 30;
    S1.marks[0] = 90;
    S1.marks[1] = 80;
    S1.marks[2] = 70;
    S1.marks[3] = 60;
    S1.marks[4] = 50;
    
    Student S2;
    S2.rollNo = 15;
    S2.name = "suyog";
    S2.age = 21;
    S2.marks[0] = 95;
    S2.marks[1] = 85;
    S2.marks[2] = 75;
    S2.marks[3] = 65;
    S2.marks[4] = 55;
    
    S1.getSumAndAvg();
    S2.getSumAndAvg();
    cout << "Student Infomation \n";
    cout << "Roll No = " << S1.rollNo << endl;
    cout << "Name = " << S1.name << endl;
    cout << "Age = " << S1.age << endl;
    cout << "Marks = ";
    for(int i = 0; i < 5; i++) {
        cout << S1.marks[i] << " ";
    }
    cout << endl;
    cout << "Sum = " << S1.sum << endl;
    cout << "Average = " << S1.avg << endl;

    cout << "---------------------------------------------------\n";

    cout << "Student Infomation \n";
    cout << "Roll No = " << S2.rollNo << endl;
    cout << "Name = " << S2.name << endl;
    cout << "Age = " << S2.age << endl;
    cout << "Marks = ";
    for(int i = 0; i < 5; i++) {
        cout << S2.marks[i] << " ";
    }
    cout << endl;

    cout << "Sum = " << S2.sum << endl;
    cout << "Average = " << S2.avg << endl;
    

}