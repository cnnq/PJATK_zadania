#include <iostream>

using namespace std;

int main() {

	int n;
	cout << "Liczba wierszy trojkata Pascala: " << endl << "n = ";
	cin >> n;
	cout << endl;

	int* primaryArray = new int[n];
	int* secondaryArray = new int[n];

	for (int i = 0; i < n; i++) {
		primaryArray[i] = 0;
		secondaryArray[i] = 0;
	}

	for (int i = 0; i < n; i++) {

		// Calculate next row
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				secondaryArray[0] = 1;
			} else {
				secondaryArray[j] = primaryArray[j - 1] + primaryArray[j];
			}
		}

		// Swap arrays
		int* temp = primaryArray;
		primaryArray = secondaryArray;
		secondaryArray = temp;

		// Print row
		for (int j = 0; j <= i; j++) {
			cout << primaryArray[j] << ' ';
		}
		cout << endl;
	}

	return 0;
}