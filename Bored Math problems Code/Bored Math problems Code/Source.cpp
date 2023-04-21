/*Program created and coded by Jordan Whittington as a means for the program to be a calculator for the user to perform
then 4 basic arithmetic operations and factorals. This is my first code that I will be creating from scratch. BOOM
Began: October 17th 2018 6:37 PM
Completed: TBD
*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int option; //option is the option that the user decides for what operation that they want the program to perform
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int total;
	char response = 'Y';

	cout << "Enter a letter that corresponds with the menu option" << endl;
	cout << "************************************" << endl; //lines 13-19 are used to display the "selection menu"
	cout << "1. Simple addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Factoral" << endl;
	cout << "************************************" << endl;
	cin >> option;

	switch (option)
	{
	case 1:
		do {
			
			cout << "What four numbers do you want to add together" << endl;
			cin >> A; B; C; D;
			total = A + B + C + D;
			cout << "The total of the numbers are" << total << endl;
			cout << "Would you like to add four more numbers together? (Y/N)" << endl;
			cin response;
			response = toupper(response);
		} while (response = 'Y');

	}
	

	system("pause");
	return 0;
}