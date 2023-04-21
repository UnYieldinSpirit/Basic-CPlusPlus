//Jordan Whittington and Adam Boehnlein
#include <iostream>
using namespace std;

int tests[6]; //array declaration
int main()
{
	int highest = 0;
	int average = 0;
	int counter = 0;
	int total = 0;
	int sum = 0;
	float avg;
	//input test scores
	cout << " Enter " << 6 << " test scores: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter Test " << i + 1 << ": ";
		cin >> tests[i];
	}
	cout << "first test score is " << tests[0] << endl; //2. Print first test score
	cout << "last test score is " << tests[5] << endl; //3. Print last test score
	for (int i = 0; i < 6; i++) //4. Print all scores
	{
		cout << tests[i] << ", ";
		counter++;
	}
	cout << endl;

	total = tests[0] + tests[1] + tests[2] + tests[3] + tests[4] + tests[5]; //5. Sum all scores
	cout << "The total of the 6 test scores is " << total << endl;

	average = total / counter; //6. Calculate the average
	cout << "The average of the 6 test scores is " << average << endl;

	for (int i = 0; i < 6; i++) //7. Add to elements
	{
		tests[i] = tests[i] + 10;
	}

	cout << "The new incremented elements are ";
	for (int i = 0; i < 6; i++)
	{
		cout << tests[i] << ", ";

	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		if (tests[i] > highest)
			highest = tests[i];
	}
	cout << "The highest score is: " << highest << endl;

	system("pause");
	return 0;
}

