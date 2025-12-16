
#include <iostream>
#include <string>
using namespace std;

string name;
string studentid;
float Total;
char grade;

int main()

{
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter student id: ";
    cin >> studentid;
    cout << "Enter your Total : ";
    cin >> Total;


    if (Total >= 80)
        grade = 'A';
    else if (Total >= 70)
        grade = 'B';
    else if (Total >= 60)
        grade = 'C';
    else if (Total >= 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "Student Name: " << name << endl;
    cout << "Student ID: " << studentid << endl;
    cout << "Score: " << Total << endl;
    cout << "Grade: " << grade << endl;

    return 0;



}

