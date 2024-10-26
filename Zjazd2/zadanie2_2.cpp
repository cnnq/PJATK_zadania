#include <iostream>

using namespace std;

int main() {

	int a, b;

	cout << "Liczba a: ";
	cin >> a;
	cout << "Liczba b: ";
	cin >> b;

	// a)
	cout << endl << "a: " << a << " ; b: " << b << endl << endl;

	// b)
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	cout << endl << endl;

	// c)
	for (int i = 0; i < b; i++) {
		cout << "*" << endl;
	}
	cout << endl;

	// d)
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// e)
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {

			if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
				cout << "*";

			} else {
				cout << " ";
			}

		}
		cout << endl;
	}
	cout << endl;

	// f)
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {

			if (j <= i) {
				cout << "*";

			} else {
				cout << " ";
			}

		}
		cout << endl;
	}
	cout << endl;

	// g)
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {

			if (j >= i) {
				cout << "*";

			}
			else {
				cout << " ";
			}

		}
		cout << endl;
	}
	cout << endl;

	return 0;
}