// test4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 1;
	cout << "======for======" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
	cout << "======do while======" << endl;
	i = 1;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= 10);
	cout << "======while======" << endl;
	i = 1;
	while (i < 10) {
		i++;
		cout << i << endl;
	}
	cout << "======do while======" << endl;
	i = 0;
	do
	{
		cout << i << endl;
		i=i+2;
	} while (i <= 20);
	

	return 0;
}




