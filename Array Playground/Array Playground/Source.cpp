#include <iostream>
using namespace std;
int numbers[5];
int main()
{
	int ans = 1;
	
	while (ans != 0)
	{
		cout << "Enter 5 numbers " << endl;
		for (int i = 0; i < 5; i++)
		{
			cin >> ans;
			numbers[i] = ans;
		}
		for (int i = 0; i < 5; i++)
		{
			cout << numbers[i] << " ";
		}

	}

	system("pause");
	return 0;

}