#include "Student.h"


Student::Student() {
	count = 0;
	id = 0;
	name = "";
	age = 0;
	marks = new int[3] {10, 9, 7};
	classNumber = 0;
	classLetter = '\0';
	alive = false;
}

Student::Student(int i, string nm, int ag, int number, char letter, double mrk, bool a) {
	id = i;
	count = 3;
	name = nm;
	age = ag;
	marks = new int[3] {10, 9, 7};
	classNumber = number;
	classLetter = letter;
	alive = a;
}

Student::Student(string nm, int ag) {
	id = 0;
	count = 3;
	name = nm;
	age = ag;
	marks = new int[3] {10, 9, 7};
	classNumber = 0;
	classLetter = '\0';
	alive = true;
}

Student::Student(const Student& student) {
	cout << "Student copy-cinstructor//]]..//";
	id = student.id;
	count = 3;
	name = student.name;
	age = student.age;
	marks = new int[3] {
		student.marks[0],
			student.marks[1],
			student.marks[2]};
	classNumber = student.classNumber;
	classLetter = student.classLetter;
	alive = student.alive;
}

Student::~Student() {
	cout << "Destructor";
	if (marks != NULL) {
		delete[] marks;
	}
}

int Student::getCount() {
	return count;
}

int Student::getID() {
	return id;
}

void Student::setID(int i) {
	id = i;
}

string Student::getName() {
	return name;
}

void Student::setName(string nm) {
	name = nm;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 10) {
		age = a;
	}
}

int Student::getClassNumber() {
	return classNumber;
}

void Student::setClassNumber(int number) {
	if (number >= 1 && number <= 11) {
		classNumber = number;
	}
}

char Student::getClassLetter() {
	return classLetter;
}

void Student::setClassLetter(char letter) {
	if (letter >= 'A' && letter <= 'Z') {
		classLetter = letter;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool a) {
	alive = a;
}

void Student::setMarks(int* ms, int c) {
	if (marks != NULL) {
		delete[] marks;
		marks = new int[c];

	}
}

string Student::toString() {
	string msg = "Student: ";
	msg += name;
	msg += ", id = " + to_string(id);
	msg += ", age = " + to_string(age);
	msg += ", class = " + to_string(classNumber) + to_string(classLetter);
	msg += ", marks = " + to_string(marks[0]) + " " + to_string(marks[1]) + " " + to_string(marks[2]);
	msg += ", alive = ";
	msg += (alive ? " yes" : "no");

	return msg;
}

int* Student::getMarks() {
	return marks;
}