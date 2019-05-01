#include "softwareStudent.h"
#include <iostream>

softwareStudent::softwareStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) :
	Student(studentID, firstName, lastName, email, age, daysToComplete, degree) {
	this->degree = degree;
}

Degree softwareStudent::getDegreeProgram() {
	return this->degree;
}

void softwareStudent::print() { // STILL REFUSING TO DO A TAB AFTER FIRST NAME - try all one cout??
	cout << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "daysInCourse: " << daysToComplete[0] << "," << daysToComplete[1] << "," << daysToComplete[2] << "\t";
	cout << " Degree Program: " << "SOFTWARE";
	cout << endl;
}

softwareStudent::~softwareStudent()
{
}