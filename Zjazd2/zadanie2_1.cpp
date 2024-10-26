#include <iostream>

using namespace std;

int main() {

	cout << "Oblicz sume pewnego szeregu" << endl;
	cout << "Podaj liczbe n: ";
	int n;
	cin >> n;

	int a = 0;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			a += j;
		}
	}

	cout << "Obliczona wartosc: ";
	cout << a;
   
	return 0;
}