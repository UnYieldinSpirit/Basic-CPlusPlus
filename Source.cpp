#include <iostream>
using namespace std;
int main()
{
	float average;
	average = 0;
	float total;
	total = 0;
	int counter;
	counter = 0;
	int num;
	cout << endl << "Enter numbers, 999 to quit" << endl; //1
	cin >> num; //1
	counter = 0;
	while (num != 999) //2
	{
		cout << counter << "." << "Number entered is: " << num << endl; //3
		total = total + num;
		cout << "The total amount is " << total << endl;
		cout << "Enter numbers, 999 to quit" << endl; //4
		cin >> num; //4
		counter = counter + 1;
		average = total / counter;
	
	}
	cout << "The number of times you entered a value is: " << counter << endl;
	cout << "The average is " << average << endl;
	system("pause");
	return 0;

}