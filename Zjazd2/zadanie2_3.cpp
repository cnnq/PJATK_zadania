#include <iostream>

using namespace std;

int main() {

	cout << "Podaj numer miesiaca: ";
	int n;
	cin >> n;
	cout << endl;

	string monthName;
	int numOfDays;

	switch (n) {
	case 1:
		monthName = "styczen";
		numOfDays = 31;
		break;
	case 2:
		monthName = "luty";
		numOfDays = 28;
		break;
	case 3:
		monthName = "marzec";
		numOfDays = 31;
		break;
	case 4:
		monthName = "kwiecien";
		numOfDays = 30;
		break;
	case 5:
		monthName = "maj";
		numOfDays = 31;
		break;
	case 6:
		monthName = "czerwiec";
		numOfDays = 30;
		break;
	case 7:
		monthName = "lipiec"; 
		numOfDays = 31;
		break;
	case 8:
		monthName = "sierpien";
		numOfDays = 31;
		break;
	case 9:
		monthName = "wrzesien";
		numOfDays = 30;
		break;
	case 10:
		monthName = "pazdziernik";
		numOfDays = 31;
		break;
	case 11:
		monthName = "listopad"; 
		numOfDays = 30;
		break;
	case 12:
		monthName = "grudzien"; 
		numOfDays = 31;
		break;
	default:
		cout << "Liczba nie nalezy do przedzialu [0; 12]" << endl;
		return 0;
	}

	cout << "Nazwa miesiaca: " << monthName << endl;
	cout << "Liczba dni w miesiacu: " << numOfDays << endl;

	if (n >= 4 && n <= 9) {
		cout << "W tym miesiacu jest slonecznie." << endl;
	} else {
		cout << "W tym miesiacu jest pochmurno." << endl;
	}

	return 0;
}