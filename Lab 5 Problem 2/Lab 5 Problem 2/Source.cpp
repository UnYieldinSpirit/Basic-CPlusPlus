#include <iostream>
using namespace std;
int main()
{
	float average;
	float total;
	float counter;
	int num;
	cout << endl << "Enter numbers, 999 to quit" << endl; //1
	total = 0;
	counter = 0;
	cin >> num; //1
	while (num != 999) //2
	{
		counter++;
		total = num + total;
		cout << "Number entered is: " << num << endl; //3
		cout << "Enter numbers, 999 to quit" << endl; //4
		cin >> num; //4
	}
	average = total / counter;
	cout << "The average of the entered numbers is " << average << endl;
	cout << "The total of the entered numbers is " << total << endl;
	system("pause");
	return 0;
}