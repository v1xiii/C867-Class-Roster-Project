#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysToComplete, Degree degree) {
	this->setStudentID(studentID);
	this->setFirstName(firstName);
	this->setLastName(lastName);
	this->setEmail(email);
	this->setAge(age);
	this->setDaysToComplete(daysToComplete);
	this->setDegree(degree);
}

Student::~Student()
{
}

// setters
void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmail(string email) {
	this->email = email;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysToComplete(int daysToComplete) {

}

void Student::setDegree(Degree degree) {
	this->degree = degree;
}

// getters
string Student::getStudentID() {
	return studentID;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmail() {
	return email;
}

int Student::getAge() {
	return age;
}

int Student::getDaysToComplete() {
	return daysToComplete[3];
}

Degree Student::getDegree() {
	return degree;
}

// helpers
/*
void Student::print() {
	return;
}


Degree Student::getDegreeProgram() {
	return;
}
*/
