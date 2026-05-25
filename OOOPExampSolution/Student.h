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

	Student(int i, string nm, int ag, int number, char letter, double mrk, bool a);

	Student(string nm, int ag);

	Student(const Student& student);

	~Student();

	int getCount();

	int getID();

	void setID(int i); 

	string getName();

	void setName(string nm);

	int getAge();

	void setAge(int a); 

	int getClassNumber();

	void setClassNumber(int number);

	char getClassLetter();

	void setClassLetter(char letter);

	bool isAlive();

	void setAlive(bool a);

	void setMarks(int* ms, int c);

	int* getMarks();

	string toString();
};