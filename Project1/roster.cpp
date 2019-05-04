#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "degree.h"
#include "roster.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

Roster::Roster()
{
}

int main() {

	Roster classRoster;

	cout << " Lee Scholl - #000598397                         |" << endl;
	cout << " Scripting and Programming - Applications - C867 |" << endl;
	cout << " Language used: C++                              |" << endl;
	cout << "==================================================" << endl;
	cout << endl;

	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Lee,Scholl,lschol1@wgu.edu,36,20,30,40,SOFTWARE"
	};

	// convert studentData array to vector
	vector<string> studentDataV;
	for (string i: studentData) { 
		studentDataV.push_back(i);
	}
	
	//parse vector
	for (int i = 0; i < 5; i++)
	{
		stringstream ss(studentDataV[i]);
		vector<string> result;
		
		// add everything between commas to a temporary vector
		while ( ss.good() )	{
			string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}

		// set variables from temporary vector
		string studentID = result[0];
		string firstName = result[1];
		string lastName = result[2];
		string email = result[3];
		int age = stoi(result[4]);
		int daysInCourse1 = stoi(result[5]);
		int daysInCourse2 = stoi(result[6]);
		int daysInCourse3 = stoi(result[7]);
		string tempDegree = result[8];

		// convert degree name string to enum
		Degree degree;
		if (tempDegree == "SECURITY")
		{
			degree = SECURITY;
		}
		else if (tempDegree == "NETWORK")
		{
			degree = NETWORK;
		}
		else if (tempDegree == "SOFTWARE")
		{
			degree = SOFTWARE;
		}
		
		// add student object to final classRoster array
		classRoster.add(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
	}

	classRoster.printAll();
	classRoster.printInvalidEmails();

	cout << "AVERAGE DAYS TO COMPLETE A COURSE |" << endl;
	cout << "===================================" << endl;
	//string ids[5] = { "A1", "A2", "A3", "A4", "A5" };
	for (int i = 0; i < 5; i++)	{ // for each student object:
		string id = classRoster.classRosterArray[i]->getStudentID(); // get the student ID,
		classRoster.printDaysInCourse(id); // send the ID to the averager.
	}

	// classRoster.printByDegreeProgram(SOFTWARE);
	// classRoster.remove("A3");
	// classRoster.remove("A3"); // this one should throw a 'not found' error

	return 0; // destructor called
}

void Roster::add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	
	switch (degree)
	{
	case SECURITY:
		classRosterArray[arraySize] = new securityStudent(studentID, firstName, lastName, email, age, daysInCourse, degree);
		//classRosterArray[arraySize]->print();
		arraySize++;
		break;
	case NETWORK:
		classRosterArray[arraySize] = new networkStudent(studentID, firstName, lastName, email, age, daysInCourse, degree);
		//classRosterArray[arraySize]->print();
		arraySize++;
		break;
	case SOFTWARE:
		classRosterArray[arraySize] = new softwareStudent(studentID, firstName, lastName, email, age, daysInCourse, degree);
		//classRosterArray[arraySize]->print();
		arraySize++;
		break;
	default:
		classRosterArray[arraySize] = new Student(studentID, firstName, lastName, email, age, daysInCourse, degree);
		//classRosterArray[arraySize]->print();
		arraySize++;
		break;
	}
	
	//classRosterArray[arraySize] = new Student(studentID, firstName, lastName, email, age, daysInCourse, degree);
	//classRosterArray[arraySize]->print();
	//arraySize++;
}

void Roster::printAll() {
	cout << "ALL STUDENTS |" << endl;
	cout << "==============" << endl;

	for (int i = 0; i < 5; i++)	{
		this->classRosterArray[i]->print();
	}

	cout << endl;
}

void Roster::printInvalidEmails() {
	cout << "INVALID EMAILS |" << endl;
	cout << "================" << endl;

	for (int i = 0; i < 5; i++)	{
		string email = this->classRosterArray[i]->getEmail();
		bool invalid = false;

		if (email.find('@', 0) == string::npos) { // if character has no position in the string
			invalid = true; // the email is invalid
		}

		if (email.find('.', 0) == string::npos) {
			invalid = true;
		}

		if (email.find(' ', 0) != string::npos) {
			invalid = true;
		}

		if (invalid == true) {
			cout << email << endl;
		}
	}

	cout << endl;
}

void Roster::printDaysInCourse(string studentID) {
	cout << studentID << " - " ;

	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) { // if studentID matches the studentID of any objects in classRosterArray:
			int* days = classRosterArray[i]->getDaysToComplete(); // get the numbers from that object,
			int avg = (days[0] + days[1] + days[2]) / 3; // average them,
			cout << avg << endl; // output them.
		}
	}
	
	cout << endl;
}

void Roster::printByDegreeProgram(Degree degree) {

}

void Roster::remove(string studentID) {

}

Roster::~Roster()
{
}