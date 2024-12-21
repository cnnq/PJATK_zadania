#include <iostream>
#include <vector>

using namespace std;

struct Student {
	int index;
	string name;
	string surname;
};

void bubbleSort(vector<Student> &students) {
	bool repeat = true;

	while (repeat) {
		repeat = false;

		for (int i = 0; i < students.size() - 1; i++) {
			if (students[i].index > students[i + 1].index) {
				Student temp = students[i];
				students[i] = students[i + 1];
				students[i + 1] = temp;

				repeat = true;
			}
		}
	}
}

void print(vector<Student> students) {
	for (int i = 0; i < students.size(); i++) {
		Student student = students[i];
		cout << student.index << " " << student.name << " " << student.surname << endl;
	}
}

int main() {

	vector<Student> students;

	int n;
	cout << "Liczba studentow: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++) {
		Student student;

		cout << "Podaj numer indeksu studenta nr " << i + 1 << ": ";
		cin >> student.index;
		cout << "Podaj imie: ";
		cin >> student.name;
		cout << "Podaj nazwisko: ";
		cin >> student.surname;
		cout << endl;

		students.push_back(student);
	}

	cout << "Wektor przed sortowaniem: " << endl << endl;
	print(students);

	bubbleSort(students);

	cout << "Wektor po sortowaniu: " << endl << endl;
	print(students);

	return 0;
}