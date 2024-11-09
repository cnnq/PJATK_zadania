#include <iostream>
#include <iomanip>

using namespace std;

int main31() {

	cout << " === Kalkulator === " << endl << endl;

	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << endl;

	cout << fixed << setprecision(2);

	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "x * y = " << x * y << endl;
	cout << "x / y = " << x / y << endl;

	return 0;
}