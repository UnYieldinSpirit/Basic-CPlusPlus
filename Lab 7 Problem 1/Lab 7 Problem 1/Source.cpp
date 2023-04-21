//Code by: Jordan Whittington and Adam Boehnlein
#include<iostream>
using namespace std;

int main()
{
	char letter1, letter2;
	int num = 0;
	int count = 0;
	cout << "**** two-letter domain names ****" << endl;
	cout << "********************************" << endl;
	for (letter1 = 'a'; letter1 <= 'z'; letter1++)
	{
		for (letter2 = 'a'; letter2 <= 'z'; letter2++)
		{
			cout << letter1 << letter2 << ".com\t";
			count++;
			if (count % 13 == 0)
				cout << endl;
		}
		for (num = 0; num <= 9; num++)
		{
			cout << letter1 << num << ".com\t";
		}
		cout << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}

