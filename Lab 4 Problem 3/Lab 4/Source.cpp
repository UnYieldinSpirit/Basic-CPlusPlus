#include <iostream>
using namespace std;
int main()
{
	char option;
	double area;
	double circumference;
	double radius;
	double diameter;
	const double Pi = 3.14159265;

	cout << "input option and radius" << endl;
	cin >> option >> radius;
	
	switch (option)
	{
	case 'A':
		area = Pi * (radius * radius);
		cout << "The area of a circle with radius " << radius << "is " << area << endl;
		break;
	case 'C':
		circumference = 2 * Pi * radius;
		cout << "The circumference of a circle with radius " << radius << "is " << circumference << endl;
		break;
	case 'D':
		diameter = 2 * radius;
		cout << "The diameter of a circle with radius " << radius << "is " << diameter << endl;
		break;

	default:
		cout << "Invalid option" << endl;
		break;
	}
	system("pause");
	return 0;
}