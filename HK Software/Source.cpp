#include <iostream>
#include <time.h>


using namespace std;

int main()
{
	cout << "HK Software" << endl;
	//these first two lines are the start of the program
	//setting the grid up
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 1;
	//these two lines randomize the location of the human
	srand(time(0));
	int enemyLocation = (rand() % 64) + 1;
	cout << "Enemy location is at " << enemyLocation;
	//these two lines are meant to take the input for the user and test it
	int hkWork = 0;

	//this line prints out the location of the human for the user
	
	do
	{
		cout << "Begin search for target: ";

		enemyLocation;
		// This is the key algorithm we will use in the program. It is called Binary Search.
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

		//tests that tells if the target was hit
		if (targetLocationPrediction == enemyLocation) {
			cout << "\nTarget Destroyed! Found at " << enemyLocation << ". \nHave a nice day!";
			break;
		}
		//tests if the shot was to high
		else if (targetLocationPrediction > enemyLocation) {
			cout << "Too high!\n\n";

			searchGridHighNumber = --targetLocationPrediction;

		}
		//tests if the shot
		else 
		{

			cout << "Too low!\n\n";

			searchGridLowNumber = ++targetLocationPrediction;
		}
	} while (searchGridLowNumber <= searchGridHighNumber);


	system("pause");

	return 0;
}