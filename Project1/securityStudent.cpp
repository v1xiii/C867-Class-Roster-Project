#include "securityStudent.h"
#include <iostream>

securityStudent::securityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse, Degree degree) : 
	Student(studentID, firstName, lastName, email, age, daysToComplete, degree) {
	this->degree = degree;
}

Degree securityStudent::getDegreeProgram() {
	return this->degree;
}

// make a function to provide degree program string for print()

void securityStudent::print() {
	cout << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "daysInCourse: " << daysToComplete[0] << "," << daysToComplete[1] << "," << daysToComplete[2] << "\t";
	cout << " Degree Program: " << getDegreeProgram();
	cout << endl;
}

securityStudent::~securityStudent()
{
}