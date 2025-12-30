#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID  : " << id << "\n";
	cout << "Score       : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}
int main()
{

	int size;
	cout << "Enter number of students: ";
	cin >> size;
	cin.ignore();

	string* name = new string[size];
	string* id = new string[size];
	double* score = new double[size];
	char* grade = new char[size];
	size_t lenght = size;
	for (int i = 0; true; i++) {

		if (i >= size) {
			break;
		}

		cout << "Enter name of student " << (i + 1) << ": ";
		getline(cin, name[i]);
		cout << "Enter ID of student " << (i + 1) << ": ";
		getline(cin, id[i]);
		cout << "Enter score of student " << (i + 1) << ": ";
		cin >> score[i];
		cin.ignore();
		calculateGrade(score[i], grade[i]);


	}


	for (int j = 0; true; j++)
	{


		if (j >= size) {
			break;
		}

		cout << endl;
		displayStudentInfo(name[j], id[j], score[j], grade[j]);


	}

	delete[]name, id, score, grade;

	return 0;
}

