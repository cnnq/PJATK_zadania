#include <iostream>
#include <vector>

using namespace std;

int main51() {

	int n;
	cout << "Liczba elementow wektora: ";
	cin >> n;

	vector<int> vec;
	
	cout << "Elementy wektora: " << endl;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}


	int maxIndex = 0, maxValue = INT32_MIN;

	for (int i = 0; i < n; i++) {
		if (vec[i] > maxValue) {
			maxValue = vec[i];
			maxIndex = i;
		}
	}

	cout << "Wartosc maksymalnego elementu: " << maxValue << endl;
	cout << "Indeks maksymalnego elementu: " << maxIndex << endl;

	return 0;
}
