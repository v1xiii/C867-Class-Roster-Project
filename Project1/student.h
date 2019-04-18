#pragma once

#include <string>
#include "degree.h"

using namespace std;

class Student
{
public:
	// constructor
	Student(string studentID, string firstName, string lastName, string email, int age, int daysToComplete, Degree degree);
	
	// destructor
	~Student();

	// getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int* getDaysToComplete();
	Degree getDegree();

	// setters
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysToComplete(int* daysToComplete);
	void setDegree(Degree degree);

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysToComplete[3];
	Degree degree;
};