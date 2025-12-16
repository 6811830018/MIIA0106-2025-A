
#include <iostream>
using namespace std;
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 1;
	cout << "======do while======" << endl;
	do
	{
		cout << i << endl;
		i = i + 2;
	} while (i <= 50);

	i = 50;
	do
	{
		cout << i << endl;
		i = i + 2;
	} while (i <= 100);
	

	return 0;
}


