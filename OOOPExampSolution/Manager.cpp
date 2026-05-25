#include "Manager.h"
double Manager::calcuateAverageMark(Student** group, int size) {
	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		Student* student = group[i];
		count += student->getCount();
		for (int j = 0; j < group[i]->getCount(); j++)
		{
			sum += student->getMarks()[j];
		}
	}

	return sum / count;
}