#include <iostream>
#include <string>

using namespace std;

class Student {

public:
	int id;
	string name;
	int age;
	double* marks;
	int class_number;
	char class_letter;
	bool alive;

	Student() {
		id = 0;
		name = "";
		age = 0;
		marks = new double[3] {10, 9, 7};
		class_number = 0;
		class_letter = '\0';
		alive = false;
	}

	Student(int i, string nm, int ag, int number, char letter, double mrk, bool a) {
		id = i;
		name = nm;
		age = ag;
		marks = new double[3] {10, 9, 7};
		class_number = number;
		class_letter = letter;
		alive = a;
	}

	Student(string nm, int ag) {
		id = 0;
		name = nm;
		age = ag;
		marks = new double[3] {10, 9, 7};
		class_number = 0;
		class_letter = '\0';
		alive = true;
	}

	Student(const Student& student) {
		cout << "Student copy-cinstructor//]]..//";
		id = student.id;
		name = student.name;
		age = student.age;
		marks = new double[3] {
			student.marks[0],
			student.marks[1],
			student.marks[2]};
		class_number = student.class_number;
		class_letter = student.class_letter;
		alive = student.alive;
	}

	string toString() {
		string msg = "Student: ";
		msg += name;
		msg += ", id = " + to_string(id);
		msg += ", age = " + to_string(age);
		msg += ", class = " + to_string(class_number) + to_string(class_letter);
		msg += ", marks = " + to_string(marks[0]) + " " + to_string(marks[1]) + " " + to_string(marks[2]);
		msg += ", alive = ";
		msg += (alive ? " yes" : "no");

		return msg;
	}
};