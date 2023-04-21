#include<iostream>
#include<string>

using namespace std;
int main()
{
	float rating;
	string name;
	char lie;

	cout << "Nice Job practicing what you know Jordi, it works." << endl;
	cout << "Suprise Suprise" << endl;

	cout << "Enter your name please. I appreciate it." << endl;
	cin >> name;
	cout << "How much do you enjoy college on a scale from 1-10, with 1 being atrocious and 10 being AMAZING." << endl;
	cin >> rating;
	if ((rating >= 11) || (rating <= 0))
		cout << "Invalid rating" << endl;
	else
		if (rating = 1)
			cout << "Wow that sucks." << endl;
		else
			if (rating = 2)
				cout << "It could be worse I guess" << endl;
			else
				if (rating = 3)
					cout << "Well freshman year is hard" << endl;
				else
					if (rating = 4)
					{
						cout << "4? Black Ops 4 comes out soon so thats something to be stoked for." << endl;
						cout << "Do people still say stoked? If not, WHOOPS." << endl;
					}
					else
						if (rating = 5)
						{
							cout << "The glass is half full, right." << endl;
							cout << "That's how you have to look at it honestly." << endl;
						}
						else
							if (rating = 6)
								cout << "That's not so bad." << endl;
							else
								if (rating = 7)
									cout << "That's a good outlook on the college experience." << endl;
								else
									if (rating = 8)
										cout << "Looks like you got it all under control." << endl;
									else
										if (rating = 9)
											cout << "A 9... WOW" << endl;
										else
											{
												cout << "Are you lieing to you. Y/N?" << endl;
												cin >> lie;
											}
	while (rating = 10)
		if ((lie = 'y') || (lie = 'Y'))
			cout << "Thought so, you bum." << endl;
		else
			if ((lie = 'n') || (lie = 'N'))
				cout << "That's cool" << endl;
			else
				cout << "Invalid input, try again" << endl;
	
	
					
		
	
	












	system("pause");
	return 0;
}

