#include "Student.h"


Student::Student() : Student(0, "No name", 10, 1, 'A', true) {
	cout << "lol\n";
	count = 3;
	marks = new int[3] {10, 9, 7};
}

Student::Student(int id, string name, int age, int classNumber, char classLetter, bool alive) {
	this->id = id;
	count = 3;
	this->name = name;
	this->age = age;
	marks = new int[3] {10, 9, 7};
	this->classNumber = classNumber;
	this->classLetter = classLetter;
	this->alive = alive;
}

Student::Student(string name, int age) : Student() {
	cout << "C0nstr wis argum\n";
	this->name = name;
	this->age = age;
}

Student::Student(const Student& student) : Student(student.id, student.name, student.age , student.classNumber, student.classLetter, student.alive) {
	cout << "Student copy-cinstructor//]]..//";

	if (student.marks != NULL && student.count > 0) {
		count = student.count;

		marks = new int[count];

		for (int i = 0; i < count; i++)
		{
			marks[i] = student.marks[i];
		}
	}

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