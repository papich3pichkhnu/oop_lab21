#pragma once
#include<string>
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
	void modifyData(Faculty* faculty);
	Faculty* returnWithModifiedData(Faculty* faculty);
	static Faculty readFromFile();
	void printToFile();
private:
	int yearOfCreating;
	int numOfCathedras;
	int numOfSpecs;
	string telephoneNumber;
	string email;
};

