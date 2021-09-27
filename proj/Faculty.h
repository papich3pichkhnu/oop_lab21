#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Faculty
{
public:
	string facultyName;
	string abbreviature;
	string decane;
	void setFaculty(string _facultyName);
	void setFaculty(string _facultyName, string _abbreviature);
	void setNumericData(int _numOfCathedras);
	void setNumericData(int _numOfCathedras, int _numOfSpecs);
	void setInfo(string _decane, int _yearOfCreating, string _telephoneNumber, string _email);
	void modifyData(Faculty* faculty);
	Faculty* returnWithModifiedData(Faculty* faculty);
	static Faculty readFromFile() {
		Faculty obj;
		ifstream in("facfile.txt", ios::in);
		in >> obj.abbreviature;
		in >> obj.decane;
		in >> obj.email;
		in >> obj.facultyName;
		in >> obj.numOfCathedras;
		in >> obj.numOfSpecs;
		in >> obj.telephoneNumber;
		in >> obj.yearOfCreating;	
		return obj;
	}
	void printToFile();
	void show();
private:
	int yearOfCreating;
	int numOfCathedras;
	int numOfSpecs;
	string telephoneNumber;
	string email;
};

