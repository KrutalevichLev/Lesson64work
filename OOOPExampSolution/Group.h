#include "Student.h"
class Group
{
private:
	string name;
	Student** list;
	int size;

public:
	Group();

	Group(string name);

	Group(string name, Student** list, int size);

	Group(const Group& group);

	~Group();


	int getSize();

	Student* getStudent(int index);

	void setName(string name);

	string getName();

	void addStudent(Student* student);

	void removeStudent(int index);

	//void removeStudent(Student* student);

	string toString();
};

