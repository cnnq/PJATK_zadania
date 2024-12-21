#include <iostream>

using namespace std;

int main() {

	cout << "Konkatenacja stringa n razy." << endl;

	string str;
	cout << "string: ";
	cin >> str;

	int n;
	cout << "n: ";
	cin >> n;

	string ret;

	for (int i = 0; i < n; i++) {
		ret += str;
	}

	cout << "string po konkatenacji: " << ret << endl;

	return 0;
}