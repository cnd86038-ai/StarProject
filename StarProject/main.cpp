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
bool isLower(double value1, double value2)
{
	return value1 < value2;
}

/*
Purpose: Determines if value1 is >= value2
Preconditions: value1 and value2 are valid scores
Postconditions: Returns true if value1 is <= value2, otherwise returns false
*/

bool isHigher(double value1, double value2)
{
	return value1 > value2;
}

/*
Purpose: Calculates final average after removing lowest/highest scores
Preconditions: total is the sum of all scores, minScore is the lowest score(valid), maxScore is the highest score(valid)
Postconditions: Returns the average score after removing the lowest and highest scores
*/

double calcAverage(double total, double minScore, double maxScore)
{
	return (total - minScore - maxScore) / 3.0;
}

int main()
{
	double score;
	double total = 0.0;
	double minScore = 10.0; // Initialize to max possible score
	double maxScore = 0.0;  // Initialize to min possible score
	double finalScore;

	cout << "STAR SEARCH JUDGING SYSTEM" << endl;


// 5 Judge loop
for (int i = 1; i <= 5; i++)
{ 
    cout << "Judge " << i << ": ";
    score = getScore();

    total += score;

    if (score < minScore)
    {
        minScore = score;
    }

    if (score > maxScore)
    {
        maxScore = score;
    }
}

finalScore = calcAverage(total, minScore, maxScore);

cout << fixed << setprecision(2);
cout << "\nHighest Score Dropped: " << maxScore << endl;
cout << "Lowest Score Dropped: " << minScore << endl;
cout << "Final Score: " << finalScore << endl;

return 0;

}
