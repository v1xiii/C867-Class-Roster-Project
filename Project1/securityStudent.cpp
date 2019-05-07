#include "securityStudent.h"
#include <iostream>

securityStudent::securityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) : 
Student(studentID, firstName, lastName, email, age, daysToComplete, degree) {
	this->degree = degree;
}

Degree securityStudent::getDegreeProgram() {
	return this->degree;
}

void securityStudent::print() {
	cout << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "daysInCourse: " << getDaysToComplete()[0] << "," << getDaysToComplete()[1] << "," << getDaysToComplete()[2] << "\t";
	cout << " Degree Program: " << "SECURITY";
	cout << endl;
}

securityStudent::~securityStudent() {
}