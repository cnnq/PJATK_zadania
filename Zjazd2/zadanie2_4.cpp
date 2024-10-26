#include <iostream>

using namespace std;

int main() {

	cout << "Podaj wysokosc diamentu: ";
	int n;
	cin >> n;
	cout << endl;

	float center = (float)n / 2 - 0.5f;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			float x = i - center;
			float y = j - center;

			if (abs(x) + abs(y) <= (center + 0.5f)) cout << "*";
			else cout << " ";

		}

		cout << endl;
	}

	return 0;
}