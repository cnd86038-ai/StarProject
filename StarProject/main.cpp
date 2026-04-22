#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
double getScore();
bool isLower(double value1, double value2);
bool isHigher(double value1, double value2);
double calcAverage(double total, double minScore, double maxScore);

/*
Purpose: Get and vlaidates judge's score between 0.0 and 10.0
Preconditions: None
Postconditions: Returns a valid score between 0.0 and 10.0
*/

double getScore()
{
	double score;
	cout << "Enter the judge's score (0.0 - 10.0): ";
	cin >> score;
	while (score < 0.0 || score > 10.0)
	{
		cout << "Invalid score. Please enter a score between 0.0 and 10.0: ";
		cin >> score;
	}
	return score;
}

/*
Purpose: Determines if value1 is <= value2
Preconditions: value1 and value2 are valid scores
Postconditions: Returns true if value1 is <= value2, otherwise returns false
*/


