
#include "arrays.h"

using namespace std;

int numbers[] = { 1, 3, 6, 8, 78, 787 };
int copyArr[size(numbers)];

int lenghtOfArr() {

	cout << sizeof(numbers) / sizeof(int) << endl;

}

void getArraySize() {

	cout << size(numbers) << endl;

}

void copyArray() {

	for (int i = 0; i < size(numbers); i++) {
	
		copyArr[i] = numbers[i];
	
	}

}