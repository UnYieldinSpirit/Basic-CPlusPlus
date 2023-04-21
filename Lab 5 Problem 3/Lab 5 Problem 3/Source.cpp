#include <iostream>
using namespace std;
int main()
{
	int oddNum = 1;

	while (oddNum <= 50)
	{
		if (oddNum % 2 == 1)
			cout << oddNum << endl;
		oddNum++;
	}
	system("pause");
	return 0;
}