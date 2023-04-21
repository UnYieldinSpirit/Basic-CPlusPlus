#include <iostream>
using namespace std;
int Bang[100];
int i;
int main()
{
	Bang[0] = 1;
	cout << "Enter 100 values, Enter 0 to quit" << endl;
	while (Bang[i-1] != 0 && i < 100)
	{
		cin >> Bang[i];
		i++;
	}
	
	

	system("pause");
	return 0;
}