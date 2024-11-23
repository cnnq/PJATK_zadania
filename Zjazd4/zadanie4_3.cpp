#include <iostream>

using namespace std;

int main() {

	cout << "Program z zadeklarowana tablica 10 x 10" << endl;

	int arr[10][10];

	for (int i = 0; i < 10; i++) {
		arr[i][0] = i;
		arr[i][1] = i + i;
		arr[i][2] = i * i;
		arr[i][3] = i + 5; // nr wiersza: (i + 1) ; nr kolumny staly: 4
		arr[i][4] = i - 4; // nr wiersza: (i + 1) ; nr kolumny staly: 5

		for (int j = 5; j < 10; j++) {
			arr[i][j] = 0;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}