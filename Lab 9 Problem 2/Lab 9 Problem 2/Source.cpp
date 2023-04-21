#include <iostream>
float getTestScore();
float calcAverage(float score1, float score2, float score3);
using namespace std;

int main()
{
	float s1, s2, s3;
	float average;

	s1 = getTestScore();
	s2 = getTestScore();
	s3 = getTestScore();

	average = calcAverage(s1, s2, s3);

	cout << "average of three test scores (" << s1 << "," << s2 << "," << s3 << ")is: " << average << endl;
	
	system("pause");
	return 0;
}

float getTestScore()
{
	float score;
	cout << "Enter a test score" << endl;
	cin >> score;

	if (score < 0)
	{
		cout << "Invalid" << endl;
		return getTestScore();
	}
	else
	{
		return score;
	}
		
	return 0;


}


float calcAverage(float score1, float score2, float score3)
{
	float average;
	average = (score1 + score2 + score3) / 3;

		return average;
}