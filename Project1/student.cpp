#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

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

int* Student::getDaysToComplete() {
	return daysToComplete;
}

Degree Student::getDegree() {
	return degree;
}

// setters
void Student::setStudentID(string studentID) {
	return;
}

void Student::setFirstName(string firstName) {
	return;
}

void Student::setLastName(string lastName) {
	return;
}

void Student::setEmail(string email) {
	return;
}

void Student::setAge(int age) {
	return;
}

void Student::setDaysToComplete(int* daysToComplete) {
	return;
}

void Student::setDegree(Degree degree) {

}