#include <iostream>

using namespace std;

int main() {

	cout << " === Program rozwiazujacy rownanie kwadratowe === " << endl << endl;


	// a)

	cout << "Rownanie kwadratowe ma postac: " << endl;
	cout << "A * x^(2) + B * x + C" << endl << endl;


	// b)

	float a, b, c;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;


	// c)

	cout << endl << "Z podstawionymi zmiennymi rownanie ma postac: " << endl;
	
	cout << a << " * x^(2)";

	if (b >= 0) cout << " + " << b << " * x";
	else cout << " - " << abs(b) << " * x";

	if (c >= 0) cout << " + " << c;
	else cout << " - " << abs(c);

	cout << endl << endl;


	// d)

	float delta = b * b - 4 * a * c;

	if (delta < 0) {
		cout << "Rownanie nie ma rozwiazan w zbiorze liczb rzeczywistych (delta < 0)" << endl;

	} else if (delta == 0) {

		float x1 = -b / (2 * a);

		cout << "Rownanie ma 1 pierwiastek: " << endl;
		cout << "x1 = " << x1 << endl;

	} else {
		float x1 = (-b - sqrt(delta)) / (2 * a);
		float x2 = (-b + sqrt(delta)) / (2 * a);

		cout << "Rownanie ma 2 pierwiastki: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	return 0;
}