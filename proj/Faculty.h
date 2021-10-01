#pragma once
#include "Student.h"
#include "Lecturer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Student;
class Lecturer;
class Faculty
{
private:
	int yearOfCreating;
	int numOfCathedras;
	int numOfSpecs;
	string telephoneNumber;
	string email;
	string facultyName;
	string abbreviature;
	string decane;
	vector<Student*> students;
	vector<Lecturer*> lecturers;
public:
	void setFaculty(string _facultyName);
	void setFaculty(string _facultyName, string _abbreviature);
	void setNumericData(int _numOfCathedras);
	void setNumericData(int _numOfCathedras, int _numOfSpecs);
	void setInfo(string _decane, int _yearOfCreating, string _telephoneNumber, string _email);
	int getNumOfCathedras();
	void modifyData(Faculty* faculty);
	Faculty returnWithModifiedData();
	static Faculty readFromFile();
	void printToFile();
	void show();
	static int* myAlloc();
	void enrollStudent(Student* s);
	void deductStudent(Student* s);
	void enrollLecturer(Lecturer* s);
	void deductLecturer(Lecturer* s);
	vector<Student*> getStudents();
};

