#pragma once
#include "Discipline.h"
#include "Department.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Department;
class Discipline;
class Student;
class Lecturer
{
private:
		
	Department* d;
public:
	string lastName;
	string firstName;
	string middleName;
	void setName(string _lName);
	void setName(string _lName, string _fName, string _mName);
	void setDepartment(Department* d);
	Lecturer();
	~Lecturer();
	Lecturer(string _lName, string _fName, string _mName);
	string getFirstName();
	string getMiddleName();
	string getLastName();
	string getFullName();	
	static Lecturer readFromFile();
	void printToFile();
};

