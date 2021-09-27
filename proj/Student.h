#pragma once
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
{
public:
	string firstName;
	string name;
	string lastName;
	void setName(string _name);
	void setName(string _name, string _firstName, string _lastName);
	void setData(string _age);
	void setHeight(string _age, string _height);
	void modifyName(Student* s);
	Student* generate();
	static Student readFromFile();
	void printToFile();
	void setFaculty(Faculty* _sFaculty);
private:
	int age;
	int height;
	string colorOfEyes;
	string colorOfHair;
	Faculty* sFaculty;
};

