#include <iostream>
#include <map>

using namespace std;

int main() {

	int n;
	cout << "Podaj liczbe elementow tablicy:" << endl;
	cin >> n;

	map<int, int> valueCounter;

	cout << "Podaj kolejne elementy tablicy:" << endl;

	for (int i = 0; i < n; i++) {

		int value;
		cin >> value;

		valueCounter[value]++;
	}

	int maxCount = 0;
	for (const auto& valueCount : valueCounter) {
		if (valueCount.second > maxCount) {
			maxCount = valueCount.second;
		}
	}

	cout << "Najczesciej wystepujace elementy to: ";

	for (const auto& valueCount : valueCounter) {
		if (valueCount.second == maxCount) {
			cout << valueCount.first << "; ";
		}
	}

	cout << endl;

	return 0;
}