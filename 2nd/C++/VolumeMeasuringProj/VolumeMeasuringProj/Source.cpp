#include <iostream>
using namespace std;

void main()
{
	int gal;
	double cubFt = 7.481;
	
	cout << "Enter count of gallons: ";
	cin >> gal;
	int userFt = (gal / cubFt);
	cout << "Cubic ft is: " << userFt;

	return;
}