#pragma once
#include "student.h"

using namespace std;

class Roster {
public:
	Roster();
	void add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(Degree degree);
	Student* classRosterArray[5];
	~Roster();

private:
	int arraySize = 0;
};