#pragma once
#include "Faculty.h"
#include "Department.h"
#include "Student.h"
#include "Lecturer.h"
#include "Discipline.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Student;
class Discipline;
class Department;
class Faculty;
class Lecturer;
class Exam
{
public:
	Faculty* faculty;
	Department* department;
	Student* student;
	Lecturer* lecturer;
	Discipline* discipline;
	int mark;
	string date;
	~Exam();
	Exam(Faculty*, Department*, Student*, Lecturer*, Discipline*);
	void takeExam(string);
};

