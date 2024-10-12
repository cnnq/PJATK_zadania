#include <iostream>

using namespace std;

int main() {

	cout << "Program do znajdowania najwiekszej liczby (wersja 1)" << endl;
	cout << "Podaj liczby:" << endl;

	float a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	cout << "Najwieksza liczba: ";

	if (a > b) { // a lub c
		if (a > c) {
			cout << a;
		}
		else {
			cout << c;
		}
	}
	else { // b lub c
		if (b > c) {
			cout << b;
		}
		else {
			cout << c;
		}
	}

	return 0;
}