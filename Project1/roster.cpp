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

int main() {

	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Lee,Scholl,lschol1@wgu.edu,36,20,30,40,SOFTWARE"
	};

	cout << "Lee Scholl - #000598397" << endl;
	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "Language used: C++" << endl;

	Roster classRoster;

	vector<string> temp;
	for (int i = 0; i < 5; i++)	{
		temp.push_back(studentData[i]);

		stringstream ss(temp[i]);
		vector<string> result;

		while ( ss.good() )
		{
			string substr;
			getline(ss, substr, ',');
			cout << substr << endl;
			result.push_back(substr);
		}

		

		string studentID; //NEXT - Assign above code to this variable, maybe need to create multilevel array of the whole thing first?
		string firstName;
		string lastName;
		string email;
		int age;
		int daysInCourse1;
		int daysInCourse2;
		int daysInCourse3;
		Degree degree;

		//add(studentID,firstName,lastName,email,age,daysInCourse1,daysInCourse2,daysInCourse3, degree);
		
	}
	
	return 0;
}


Roster::Roster()
{
}

Roster::~Roster()
{
}

void add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree) {

}

void remove(string studentID) {

}

void printAll() {

}

void printDaysInCourse(string studentID) {

}

void printInvalidEmails() {

}

void printByDegreeProgram(int degree) {

}