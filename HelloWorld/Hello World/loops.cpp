#include "Headers.h"

void printFactorial() {

	int factorial = 1;

	cout << "Choose a positive number to print the factorial of:" << endl;
	int chsnNumb;
	cin >> chsnNumb;

	if (chsnNumb <= 0) {
		cout << endl << "Plase print a positive number" << endl << endl;
		printFactorial();
	}

	else {

		for (int i = 1; i <= chsnNumb; i++)
		{
			factorial *= i;
		}
		cout << endl << "The factorial is: " << factorial << endl;
	}
}

void getAverage() {

	const int valueAmm = 5;
	int values[valueAmm];
	double sumation = 0;

	for (int i = 0; i < valueAmm; i++) {
		cout << "Introduce value " << i + 1 << endl;
		cin >> values[i];
		cout << endl;
		sumation += values[i];
	}

	cout << endl << "Average is: " << sumation / valueAmm;

}

void guessNumber() {

	srand(time(nullptr));
	int secretN = rand() % 10 + 1;
	
	int guess = -1;

	while (guess != secretN) 
	{
		cout << "Guess secret number between 1 and 10" << endl;
		cin >> guess;
		cout << endl;
	}
		cout << "You got it!" << endl;
		cout << "Secret number was: " << secretN << endl;

}

void doGuessNumber() {

	srand(time(nullptr));
	int secretN = rand() % 10 + 1;

	int guess = -1;

	do{
		cout << "Guess secret number between 1 and 10" << endl;
		cin >> guess;
		cout << endl; } while (guess != secretN);


	cout << "You got it!" << endl;
	cout << "Secret number was: " << secretN << endl;

}

void printTriangle(){

	int rows;

	cout << "Choose a positive number of rows: ";
	cin >> rows;

	if (rows <= 0) 
	{
		printTriangle();
	}

	else {

		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < i; j++) {

				cout << "*";

			}
			cout << endl;
		}

	}

}

int loops() {

	int chsnNum = 0;

	do 
	{
		cout << "Choose one of the functions to run:" << endl << endl
			 << "1 - Print factorials" << endl << endl
			 << "2 - Get average" << endl << endl
			 << "3 - Guess number" << endl << endl
			 << "4 - Print triangle" << endl << endl;

		cin >> chsnNum;

		cout << endl;

	} while (chsnNum < 1 || chsnNum > 5);

	switch (chsnNum)
	{
		case 1: printFactorial(); break;
		case 2: getAverage(); break;
		case 3: guessNumber(); break;
		case 4: printTriangle(); break;
	}

	return 0;
}	