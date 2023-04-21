#include <iostream>
#include <fstream> // For file I/O
using namespace std;
int main()
{
	float amt1; // # of gallons for fillup 1
	float amt2; // # of gallons for fillup 2
	float amt3; // # of gallons for fillup 3
	float amt4; // # of gallons for fillup 4
	float startMiles; // Starting mileage
	float endMiles; // Ending mileage
	float mpg; // Computed miles per gallon
	ifstream inMPG; // Holds gallon amts & mileages
	ofstream outMPG; // Holds miles per gall. Output

	// Open the files
	inMPG.open("inmpg.txt");
	if (inMPG.fail())
	{
		cout << "can't find inmpg.txt" << endl;
		return 0;
	}
	outMPG.open("outmpg.txt");
	if (outMPG.fail())
	{
		cout << "can't create/ open outmpg.txt" << endl;
		return 0;
	}

	// Get data (priming read)
	cout << "Reading from file" << endl;
	inMPG >> amt1 >> amt2 >> amt3 >> amt4 >> startMiles >> endMiles;
	while (!inMPG.eof())
	{
		// Compute miles per gallon
		mpg = (endMiles - startMiles) / (amt1 + amt2 + amt3 + amt4);
		// Output results
		cout << "wrote to file outmpg.txt" << endl;
		outMPG << "For the gallon amounts" << endl;
		outMPG << amt1 << ' ' << amt2 << ' ' << amt3 << ' ' << amt4 << endl;
		outMPG << "and a starting mileage of " << startMiles << endl;
		outMPG << "and an ending mileage of " << endMiles << endl;
		outMPG << "the mileage per gallon is " << mpg << endl;
		cout << "\n Reading the next set of data" << endl;
		inMPG >> amt1 >> amt2 >> amt3 >> amt4 >> startMiles >> endMiles;
	}
	
	system("pause")
	return 0;
}