#include <iostream>

using namespace std;

const int NUM_OF_STUDENTS = 6;
const int NUM_OF_SUBJECTS = 4;

struct Student {
	string name;
	int grades[NUM_OF_SUBJECTS];
};

int main() {

	string subject_names[NUM_OF_SUBJECTS] = { "informatyki", "matematyki", "chemii", "jezyka polskiego" };

	Student students[NUM_OF_STUDENTS];

	for (int i = 0; i < NUM_OF_STUDENTS; i++) {
		Student student;

		cout << "Podaj imie ucznia nr " << i + 1 << ": ";
		cin >> student.name;

		for (int j = 0; j < NUM_OF_SUBJECTS; j++) {
			cout << "Podaj ocene z " << subject_names[j] << ": ";
			cin >> student.grades[j];
		}

		cout << endl;

		students[i] = student;
	}

	int n;
	cout << "Podaj liczbe zapytan: ";
	cin >> n;

	for (int i = 0; i < n; i++) {

		int student_id;
		cout << "Podaj nr ucznia [1..6]: ";
		cin >> student_id;
	
		int subject_id;
		cout << "Podaj nr przedmiotu [0..3]: ";
		cin >> subject_id;

		Student student = students[student_id - 1];

		cout << "Uczen: " << student.name << ", ocena z " << subject_names[subject_id] << ": " << student.grades[subject_id] << endl;
	}
	
	return 0;
}
