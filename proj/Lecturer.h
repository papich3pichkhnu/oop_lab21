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
	string firstName;
	string name;
	string lastName;
	Faculty* f;	
public:
	void setName(string _name);
	void setName(string _name, string _firstName, string _lastName);
	void setFaculty(Faculty* f);
	string getFirstName();
	string getName();
	string getLastName();
	void teaching();
	void addDiscipline(Discipline* d);
};

