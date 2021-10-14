#pragma once
#include "Discipline.h"
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Faculty;
class Discipline;
class Student;
class Lecturer
{
private:
	vector<Discipline*> disciplines;	
	Faculty* f;	
public:
	string lastName;
	string firstName;
	string middleName;
	void setName(string _lName);
	void setName(string _lName, string _fName, string _mName);
	void setFaculty(Faculty* f);
	Lecturer();
	~Lecturer();
	Lecturer(string _lName, string _fName, string _mName);
	string getFirstName();
	string getMiddleName();
	string getLastName();
	string getFullName();
	void teaching();
	void addDiscipline(Discipline* d);
	static Lecturer readFromFile();
	void printToFile();
};

