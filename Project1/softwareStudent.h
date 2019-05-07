#pragma once
#include "student.h"

class softwareStudent : public Student {
public:

	softwareStudent(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse, Degree degree);
	Degree getDegreeProgram() override;
	void print() override;

	~softwareStudent();

private:
	Degree degree;
};