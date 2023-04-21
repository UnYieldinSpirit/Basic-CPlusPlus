//Code by Jordan Whittington and Adam Boehnlein
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int i = 0;

	cout << "Enter a positive integer, 0 to quit" << endl;
	cin >> num;
	while (num != 0)
		if (num < 0)
		{
			cout << "Invalid. Enter a positive integer, 0 to quit" << endl;
			cin >> num;
		}
		else
		{
			for (i = 1; i <= num; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "Enter a positive integer, 0 to quit" << endl;
			cin >> num;
		}
	cout << "Goodbye" << endl;
	
	return 0;
}