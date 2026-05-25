#include "Student.h"

class Manager
{
private:
	Student** list;
	int size;
public:
	double calcuateAverageMark(Student** group, int size);
};

