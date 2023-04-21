#include <iostream>
using namespace std;
void DoThis(int& alpha, int beta);

int main()
{

	int gamma = 10;
	int delta = 20;

	DoThis(gamma, delta);
	cout << "This is gamma: " << gamma << endl;
	cout << "This is delta: " << delta << endl;

	system("pause");
	return 0;
}

void DoThis(int& alpha, int beta)
{
	int temp;

	alpha = alpha + 100;
	temp = beta;
	beta = 999;
}