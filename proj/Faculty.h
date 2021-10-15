#pragma once
#include "Student.h"
#include "Discipline.h"
#include "Department.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Student;
class Discipline;
class Department;
class Faculty
{
private:
	int yearOfCreating;
	int numOfSpecs;
	string telephoneNumber;
	string email;	
	vector<Student*> students;
	vector<Department*> departments;
	
	static int count;
public:
	string facultyName;
	string abbreviature;
	string decane;
	Faculty();
	~Faculty();
	Faculty(string _fName, string _a, string _d, int _yc, int _nc, int _ns, string _tn, string _e);
	void setFaculty(string _facultyName);
	void setFaculty(string _facultyName, string _abbreviature);
	void setNumericData(int _numOfSpecs);
	void setInfo(string _decane, int _yearOfCreating, string _telephoneNumber, string _email);
	int getNumOfDepartments();
	void modifyData(Faculty* faculty);
	Faculty returnWithModifiedData();
	static Faculty readFromFile();
	void printToFile();
	void show();
	static int* myAlloc();
	void enrollStudent(Student* s);
	void deductStudent(Student* s);
	void addDepartment(Department* s);
	void deleteDepartment(Department* s);
	Student* findStudent(string _ln, string _fn, string _mn);
	vector<Student*> getStudents();
	
};

