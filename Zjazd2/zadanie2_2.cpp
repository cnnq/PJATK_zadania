#include <iostream>

using namespace std;

int main() {

	int a, b;

	cout << "Liczba a: ";
	cin >> a;
	cout << "Liczba b: ";
	cin >> b;

	// a)
	cout << endl << "Pobrano liczby " << "a: " << a << " ; b: " << b << endl << endl;

	// b)
	cout << "Wiersz o dlugosci a:" << endl;
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	cout << endl << endl;

	// c)
	cout << "Kolumna o dlugosci b:" << endl;
	for (int i = 0; i < b; i++) {
		cout << "*" << endl;
	}
	cout << endl;

	// d)
	cout << "Prostokat o wymiarach a na b:" << endl;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// e)
	cout << "Obwod prostokati o wymiarach a na b:" << endl;
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
	cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu:" << endl;
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
	cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:" << endl;
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