#include <iostream>
#include <string>
using namespace std;

int Maximumvalue (int a, int b, int c)
{
	if (a > b)
		return a;
	else if (a > b) if (b > c)
		return b;
	else
		return c;
	
}
int main()
{
	int a, b, c;
	cout << "Enter number: ";
	cin >> a ;
	cout << "Enter number: ";
	cin >> b;
	cout << "Enter number: ";
	cin >> c ;
	int max = Maximumvalue(a, b, c);
	cout << "The maximum value is: " << max << endl;

	return 0;
}


