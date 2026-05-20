#include "Student.h"

void print(Student student) {
	cout << "In print func";
	cout << student.toString() << endl;
}

Student getBestStudent(Student student) {
	Student alex(123, "Alex", 15, 9, 'A', 10, true);
	return alex;
}

int main() {
	//Student alex(123, "Alex", 15, 9, 'A', 10, true);
	// 
	Student vlad = getBestStudent(vlad);
	// 
	//Student polina(124, "Polina", 14, 9, 'B', 9, true);
	//
	//Student vlad;
	//
	//vlad = alex;
	//cout << "Before";
	//cout << alex.toString() << endl;
	cout << vlad.toString() << endl;
	//
	//alex.id = 1;
	//
	//cout << "After";
	//cout << alex.toString() << endl;
	//cout << vlad.toString() << endl;

	return 0;
}