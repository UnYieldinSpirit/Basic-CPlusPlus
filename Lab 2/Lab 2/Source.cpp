#include <iostream>
#include <string>
using namespace std;
int main()
{
	//declarations
	string name;
	int age;
	int height;
	int weight;
	char sex;
	string lastName;
	//input
	cout << "Enter your first name" << endl;
	cin >> name;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << "Enter your height" << endl;
	cin >> height;
	cout << "Enter your weight" << endl;
	cin >> weight;
	cout << "Enter your sex m/f" << endl;
	cin >> sex;
	cout << "Enter your Last Name" << endl;
	cin >> lastName;

	//output
	cout << "Hello " << name << "! " << endl;
	return 0;
}