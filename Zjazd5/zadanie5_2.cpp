#include <iostream>

using namespace std;

int main() {

	int m, n;
	cout << "Liczba wierszy: ";
	cin >> m;
	cout << "Liczba kolumn: ";
	cin >> n;
	cout << endl;

	int* arr = new int[m * n];

	cout << "Tablica wejsciowa: " << endl;
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			cin >> arr[y * n + x];
		}
	}
	cout << endl;

	for (int y = 0; y < m; y++) {
		for (int x = 0; x < (n / 2); x++) {
			int oppositeX = n - 1 - x;
			// swap
			int temp = arr[y * n + x];
			arr[y * n + x] = arr[y * n + oppositeX];
			arr[y * n + oppositeX] = temp;
		}
	}

	cout << "Tablica wyjsciowa: " << endl;
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			cout << arr[y * n + x] << '\t';
		}
		cout << endl;
	}

	return 0;
}
