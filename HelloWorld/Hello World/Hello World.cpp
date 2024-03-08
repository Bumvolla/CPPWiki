#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

double getRemainingMoney(double sales, double stateTax, double countyTax) {
	stateTax = stateTax / 100;
	countyTax = countyTax / 100;

	double remainingMoney = sales - (sales * (stateTax + countyTax));

	return remainingMoney;
}

int taxCalculator() {

	cout << "Total sales m'lady?\n" << endl;

	double sales;
	cin >> sales;

	const double stateTaxPerc = 4;
	const double countyTaxPerc = 2;

	double remainingMoney = getRemainingMoney(sales, stateTaxPerc, countyTaxPerc);

	cout << "\n" << "Remaining money is: " << remainingMoney << endl << "\n"
		<< "Total payed tax is: " << sales - remainingMoney << "\n" << endl;

	return 0;
}

int circunferenceArea() {

	const double pi = 3.1415;
	double circleRadius;

	cout << "Tell me the radius of your circle :) \n";

	cin >> circleRadius;

	double circleArea = pi * pow(circleRadius, 2);

	cout << "The fucking area of your fuckig cicle is " << circleArea;

	return 0;
}


int dice() {

	long fTime = time(nullptr);
	int dieFace = 6;

	srand(fTime);

	int dice = rand() % dieFace + 1;
	cout << "The dice result is: " << dice;

	return 0;
}

void table() {
	cout << left << "Course" << setw(20) << right << "Students" << endl
		<< left << "C++" << setw(23) << right << "100" << endl
		<< left << "JavaScript" << setw(16) << right << "50" << endl;

}

void narrowingTest() {
	long longN = 10'000'000;
	short shortN;
	shortN = longN;
	constexpr short shortMax = numeric_limits<short>::max();
	cout << "Short max number is: " << setw(32) << shortMax << endl << endl
		<< "10'000'000 converted to short is :" << setw(20) << shortN << endl << endl;


}

int main() {

	narrowingTest();

	return 1;


	/*int chosenFunc;

	cout << "Which functionality do you want to use?" << endl << "1 - taxCalculator" << endl << "2 - circumferenceArea" << endl << "3 - rollDice" << endl;
	cin >> chosenFunc;
	switch (chosenFunc) {
		1 =
	}
	*/
}