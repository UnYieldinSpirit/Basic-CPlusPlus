//Jordan Whittington & Adam Boehnlein
#include <iostream>
using namespace std;
int Square(int x);
void CalcCube(int x, int& cube);
int main()
{
	int square, number, cube;

	cout << "Enter number, 0 to quit" << endl;
	cin >> number;
	while (number != 0)
	{
		square = Square(number);
		CalcCube(number, cube);
		cout << number << " squared is " << square
			<< " cubed is " << cube << endl;
		cout << "Enter number, 0 to quit" << endl;
		cin >> number;
	}
	return 0;
}
int Square(int x)
{
	int result;
	result = x * x;
	return (result);
}
void CalcCube(int x, int& cube)
{
	cube = x * x * x;
}
