#include <iostream>

using namespace std;

int main() {
	cout << "Program sprawdzajacy parzystosc liczby" << endl;
	cout << "Podaj calkowita liczbe n." << endl << "n: ";

	int n;
	cin >> n;

	if (n == 0) {
		cout << "Liczba nie jest ani parzysta, ani nieparzysta." << endl;
	}
	else if (n % 2 == 0) {
		cout << "Liczba jest parzysta." << endl;
	}
	else {
		cout << "Liczba jest nieparzysta." << endl;
	}

	return 0;
}