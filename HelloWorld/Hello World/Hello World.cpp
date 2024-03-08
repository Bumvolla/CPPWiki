#include <iostream>
#include <iomanip>

#include <cstdlib>
#include <ctime>

#include <string>


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

void violateUserPrivacy() {

	string userName;
	cout << "Insert your name:";
	getline(cin, userName);
	cout << endl;

	string country;
	cout << "Insert your country:";
	getline(cin, country);
	cout << endl;

	string city;
	cout << "Insert your city:";
	getline(cin, city);
	cout << endl;

	string street;
	cout << "Insert your street:";
	getline(cin, street);
	cout << endl


		 << "You're " << userName << ", you live in " << street << " street, " << city << ", " << country;

}

void storeNames() {

	string nameArray[] = {"Name1", "Name2" ,"Name3"};
	cout << "Write 3 names:" << endl;

	getline(cin, nameArray[0]);
	getline(cin, nameArray[1]);
	getline(cin, nameArray[2]);

	cout << "First name you wrote is: " << nameArray[0];
}



int main() {

	storeNames();

	return 1;
}