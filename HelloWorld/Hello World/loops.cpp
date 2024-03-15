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
	int sumation = 0;

	for (int i = 0; i < valueAmm; i++) {
		cout << "Introduce value " << i + 1 << endl;
		cin >> values[i];
		cout << endl;
		sumation += values[i];
	}

	cout << endl << "Average is: " << sumation / valueAmm;

}

int main() {

	getAverage();

	return 0;
}