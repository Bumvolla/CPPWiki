#include "Headers/functions.h"

namespace fnc {

	int returnBiger(int firstNumber, int secondNumber) {
		if (firstNumber > secondNumber) {
			return firstNumber;
		}
		else if (firstNumber < secondNumber) {
			return secondNumber;
		}
		else
			return 0;

	}

	void askForBigger() {
		int n1;
		int n2;

		cout << "Provide 2 numbers :" << endl;
		cin >> n1;
		cin >> n2;

		if (returnBiger(n1, n2) != 0)
			cout << "The biger one is: " << returnBiger(n1, n2) << endl;
		else
			cout << "Both numbers were the same, the number was:" << n1 << endl;

		return 0;
	}

}



