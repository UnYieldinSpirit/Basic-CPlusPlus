#include <iostream>
#include <string>
using namespace std;
int main()
{
	int option;
	string name;
	string date;

	cout << "Please enter your name" << endl;
	cin >> name;
	cout << "Please enter the date" << endl;
	cin >> date;
	

	// print menu
	cout << "************************************" << endl;
	cout << "1. French " << endl;
	cout << "2. Spanish " << endl;
	cout << "3. English " << endl;
	cout << "4. German" << endl;
	cout << "************************************" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "Bonjour!" << endl;
		break;
	case 2:
		cout << "Hola!" << endl;
		break;
	case 3:
		cout << "Hello!" << endl;
		break;
	case 4: 
		cout << "Hallo" << endl;
		break;

	default:
		cout << "Invalid option" << endl;
		break;
	}
	system("pause");
	return 0;
}