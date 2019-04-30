#pragma once
#include "student.h"

class securityStudent : public Student
{
public:

	securityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse, Degree degree);
	Degree getDegreeProgram() override;
	void print() override;

	~securityStudent();

private:
	Degree degree;
};