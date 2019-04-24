#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "degree.h"
#include "roster.h"
#include "student.h"
//#include "networkStudent.h"
//#include "securityStudent.h"
//#include "softwareStudent.h"

using namespace std;

Roster::Roster()
{
}

int main() {

	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Lee,Scholl,lschol1@wgu.edu,36,20,30,40,SOFTWARE"
	};

	vector<string> studentDataV;
	for (string i: studentData) { // convert studentData array to vector
		studentDataV.push_back(i);
	}

	cout << " Lee Scholl - #000598397                         |" << endl;
	cout << " Scripting and Programming - Applications - C867 |" << endl;
	cout << " Language used: C++                              |" << endl;
	cout << "==================================================" << endl;
	cout << endl;

	Roster classRoster;
	
	for (int i = 0; i < 1; i++) // currently limiting loop to first item
	{
		stringstream ss(studentDataV[i]);
		vector<string> result;
		
		while ( ss.good() )	{
			string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}

		string studentID = result[0];
		string firstName = result[1];
		string lastName = result[2];
		string email = result[3];
		int age = stoi(result[4]);
		int daysInCourse1 = stoi(result[5]);
		int daysInCourse2 = stoi(result[6]);
		int daysInCourse3 = stoi(result[7]);
		string tempDegree = result[8];

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
		
		//cout << studentID << endl;
		//cout << firstName << endl;
		//cout << lastName << endl;
		//cout << email << endl;
		//cout << age << endl;
		//cout << daysInCourse1 << endl;
		//cout << daysInCourse2 << endl;
		//cout << daysInCourse3 << endl;
		//cout << degree << endl;
		
		classRoster.add(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
	}

	return 0;
}

void Roster::add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[0] = new Student(studentID, firstName, lastName, email, age, daysInCourse[3], degree);
	classRosterArray[0]->print();
}

void Roster::remove(string studentID) {

}

void Roster::printAll() {

}

void Roster::printDaysInCourse(string studentID) {

}

void Roster::printInvalidEmails() {

}

void Roster:: printByDegreeProgram(int degree) {

}

Roster::~Roster()
{
}