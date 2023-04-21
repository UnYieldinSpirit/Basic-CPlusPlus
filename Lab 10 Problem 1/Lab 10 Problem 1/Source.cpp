//Jordan Whittington and Adam Boehnlein 11/28/2018
#include <iostream>
using namespace std;
void PrintLines(int); // Function prototype
int main()
{
	
	PrintLines(2); //actual argument
	cout << " Welcome Home!" << endl;
	PrintLines(4); //actual argument
	system("pause");
	return 0;
}

void PrintLines(int numLines) //formal argument
{
	int line; // Loop control variable
	for (line = 0; line < numLines; line++) 
	{
		cout << "*************************************" << endl;
	}
}
