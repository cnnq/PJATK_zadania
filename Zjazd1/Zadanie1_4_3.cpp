#include <iostream>

using namespace std;

int main() {
	cout << "Program do znajdowania najwiekszej liczby  (wersja 3)" << endl;
	cout << "Podaj liczby:" << endl;

	float a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	cout << "Najwieksza liczba: ";

	if (a > b) {
		cout << ((a > c) ? a : c);
	}
	else {
		cout << ((b > c) ? b : c);
	}

	return 0;
}