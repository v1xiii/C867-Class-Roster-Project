#pragma once
#include "student.h"

class networkStudent : public Student
{
public:

	networkStudent(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse, Degree degree);
	Degree getDegreeProgram() override;
	void print() override;

	~networkStudent();

private:
	Degree degree;
};