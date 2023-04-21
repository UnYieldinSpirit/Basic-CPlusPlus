#include <iostream>
using namespace std;
int main()
{
	char ans;
	int num;
	cout << endl << "Do you want to square a number?(y/n)" << endl; // 1
	cin >> ans; //1
	while ((ans == 'y') || (ans == 'Y')) //2
	{
		cout << "Enter number to be squared: " << endl; //3
		cin >> num; //3
		cout << "The square of " << num << " is " << num * num << endl; //3

		cout << endl << "Do you want to do another square?(y/n)" << endl; //  4
		cin >> ans; //  4
	}
	cout << "GoodBye" << endl;
	system("pause");
	return 0;
}