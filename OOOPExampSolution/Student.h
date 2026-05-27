#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int id;
	string name;
	int count;
	int age;
	int* marks;
	int classNumber;
	char classLetter;
	bool alive;

public:

	Student();

	Student(int id, string name, int age, int classNumber, char classLetter, double mark, bool alive);

	Student(string name, int age);

	Student(const Student& student);

	~Student();

	int getCount();

	int getID();

	void setID(int id); 

	string getName();

	void setName(string name);

	int getAge();

	void setAge(int age); 

	int getClassNumber();

	void setClassNumber(int classNumber);

	char getClassLetter();

	void setClassLetter(char classLetter);

	bool isAlive();

	void setAlive(bool alive);

	void setMarks(int* marks, int c);

	int* getMarks();

	string toString();
};