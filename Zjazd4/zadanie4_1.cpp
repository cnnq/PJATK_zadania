#include <iostream>

using namespace std;

int main() {

	int n;
	cout << "Podaj liczbe elementow tablicy:" << endl;
	cin >> n;

	int* arr = new int[n];

	cout << "Podaj kolejne elementy tablicy:" << endl;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maxValue = INT32_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxValue) maxValue = arr[i];
	}

	cout << "Najwiekszy element tablicy: " << maxValue << endl;

	return 0;
}