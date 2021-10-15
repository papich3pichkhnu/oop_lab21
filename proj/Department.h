#pragma once
#include "Lecturer.h"
#include "Discipline.h"
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Lecturer;
class Faculty;
class Discipline;
class Department
{
public:
	static int count;
	string name;
	vector<Lecturer*> lecturers;
	Lecturer* headOfDepartment;
	Faculty* f;
	Department(string _n);
	~Department();
	Department();
	void enrollLecturer(Lecturer* l);
	void deductLecturer(Lecturer* l);
	void setHeadOfDepartment(Lecturer* l);
	void setFaculty(Faculty* f);
};

