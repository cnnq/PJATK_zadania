#include <iostream>

using namespace std;

int main() {
	cout << "Program sprawdzajacy czy liczba jest dodatnia, ujemna lub rowna 0" << endl;
	cout << "Podaj calkowita liczbe n." << endl << "n: ";

	int n;
	cin >> n;

	if (n > 0) {
		cout << "liczba jest dodatnia." << endl;
	}
	else if (n == 0) {
		cout << "liczba jest rowna zero." << endl;
	}
	else {
		cout << "liczba jest ujemna." << endl;
	}

	return 0;
}