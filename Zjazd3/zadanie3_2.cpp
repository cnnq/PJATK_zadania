#include <iostream>
#include <conio.h>

using namespace std;

int main32() {

	char c;

	do {
		c = _getch();
		cout << c << endl;
	} while (c != 't');

	return 0;
}