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
	void setData(int _age);
	void setData(int _age, int _height);
	void setEyesHair(string _colorOfEyes, string _colorOfHair);
	void modifyName(Student* s);
	void setFaculty(Faculty* _sFaculty);
	Student* generate();
	static Student readFromFile()
	{
		Student obj;
		ifstream in("studfile.txt", ios::in);
		in >> obj.firstName;
		in >> obj.name;
		in >> obj.lastName;
		in >> obj.age;
		in >> obj.height;
		in >> obj.colorOfEyes;
		in >> obj.colorOfHair;
		return obj;
	}
	void printToFile();
	void show();
private:
	int age;
	int height;
	string colorOfEyes;
	string colorOfHair;
	Faculty* sFaculty;
};

