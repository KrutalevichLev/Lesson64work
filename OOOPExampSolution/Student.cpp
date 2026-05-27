#include "Student.h"


Student::Student() {
	count = 3;
	id = 0;
	name = "";
	age = 0;
	marks = new int[3] {10, 9, 7};
	classNumber = 0;
	classLetter = '\0';
	alive = false;
}

Student::Student(int id, string name, int age, int classNumber, char classLetter, double mark, bool alive) {
	this->id = id;
	count = 3;
	this->name = name;
	this->age = age;
	marks = new int[3] {10, 9, 7};
	this->classNumber = classNumber;
	this->classLetter = classLetter;
	this->alive = alive;
}

Student::Student(string name, int age) {
	this->id = 0;
	this->count = 3;
	this->name = name;
	this->age = age;
	this->marks = new int[3] {10, 9, 7};
	this->classNumber = 0;
	this->classLetter = '\0';
	this->alive = true;
}

Student::Student(const Student& student) {
	cout << "Student copy-cinstructor//]]..//";
	this->id = student.id;
	this->count = 3;
	this->name = student.name;
	this->age = student.age;
	this->marks = new int[3] {
		student.marks[0],
			student.marks[1],
			student.marks[2]};
	this->classNumber = student.classNumber;
	this->classLetter = student.classLetter;
	this->alive = student.alive;
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

void Student::setID(int id) {
	this->id = id;
}

string Student::getName() {
	return name;
}

void Student::setName(string nm) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 10) {
		this->age = age;
	}
}

int Student::getClassNumber() {
	return classNumber;
}

void Student::setClassNumber(int classNumber) {
	if (classNumber >= 1 && classNumber <= 11) {
		this->classNumber = classNumber;
	}
}

char Student::getClassLetter() {
	return classLetter;
}

void Student::setClassLetter(char classLetter) {
	if (classLetter >= 'A' && classLetter <= 'Z') {
		this->classLetter = classLetter;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

void Student::setMarks(int* marks, int c) {
	if (marks != NULL) {
		delete[] marks;
		this->marks = new int[c];

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