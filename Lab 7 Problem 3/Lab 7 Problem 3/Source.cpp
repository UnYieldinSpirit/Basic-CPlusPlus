//Code by Jordan Whittington and Adam Boehnlein
#include<iostream>
using namespace std;
char answer;
int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	answer = 'Y';

	cout << "Enter a positive integer between 5 and 50, 0 to quit" << endl;
	cin >> num;
	while (answer == 'Y')
	{
		if ((num >= 5) && (num <= 50))
		{
			while ((num >= 5) && (num <= 50))
			{
				for (j = 1; j <= num; num--)						//This is used to decrease the value of num so that the triangle has a triangle point to it

				{
					for (i = 1; i <= num; i++)
					{
						cout << "*";
					}
					cout << endl;
				}

			}
			cout << "Would you like to continue? (Y/N)" << endl;
			cin >> answer;
			answer = toupper(answer);
		}

		else
		{
			cout << "Enter a positive integer between 5 and 50, 0 to quit" << endl;
			cin >> num;
		}
	}
	cout << "Goodbye" << endl;

	system("pause");
	return 0;
}