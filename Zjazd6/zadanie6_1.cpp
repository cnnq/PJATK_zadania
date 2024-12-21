#include <iostream>

using namespace std;

int main() { 

	int n;
	cout << "n: ";
	cin >> n;

	int count = 0;
	for (int i = 5; i < n; i += 5) {
		if (i % 3 != 0) count++;
	}

	cout << "Ilosc liczb naturalnych podzielnych przez 5 i niepodzielnych przez 3: " << count << endl;
	cout << "(Zakladajac ze zero nie spelnia warunkow zadania)" << endl;

	return 0;
}