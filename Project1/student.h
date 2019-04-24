#pragma once

#include <string>
#include "degree.h"

using namespace std;

class Student
{
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysToComplete[3];
	Degree degree;

public:
	// constructor
	Student(string studentID, string firstName, string lastName, string email, int age, int daysToComplete, Degree degree);
	
	// destructor
	~Student();

	// setters
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysToComplete(int daysToComplete);
	void setDegree(Degree degree);

	// getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int getDaysToComplete();
	Degree getDegree();

	// helpers
	virtual void print();
	//virtual Degree getDegreeProgram();
};