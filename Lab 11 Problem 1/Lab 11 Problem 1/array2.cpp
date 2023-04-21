//Adam Boehnlein Jordan Whittington 12-5-18
#include <iostream>
using namespace std;
bool search(int arr[], int size, int val);
const int SIZE = 25;
int main()
{
	int nums[SIZE]; // array declaration
	bool found;
	int n;
	//initialize array nums
	for (int i = 0; i < SIZE; i++)
	{
		nums[i] = rand() % 251;
	}
	// display the content of array nums
	cout << "\n************************\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << "\n************************\n";
	cout << "please enter a number between 0 to 250" << endl;
	cin >> n;
	found = search(nums, SIZE, n);
	if (found)
		cout << n << " was found in our data set!\n";
	else
		cout << n << " was NOT found in our data set!\n";
	system("pause");
	return 0;
}
bool search(int arr[], int size, int val)
{
	bool foundValue = false;
	for (int i = 0; i < 25; i++)
		if (arr[i] == val)
			foundValue = true;
	return foundValue;
}