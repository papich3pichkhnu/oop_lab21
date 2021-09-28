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
	static Student* generate() {
		srand(time(NULL));
		Student* s = new Student();
		s->age = rand() % 20 + 18;
		string colorOfEyes[] = { "brown","green","blue" };
		s->colorOfEyes = colorOfEyes[rand() % 3];
		string colorOfHair[] = { "black","blonde","red" };
		s->colorOfHair = colorOfHair[rand() % 3];
		string firstName[] = { "John","Billy","Daniel" };
		s->firstName = firstName[rand() % 3];
		s->height = rand() % 50 + 110;
		s->lastName = "None";
		s->name = "None";
		s->sFaculty = NULL;
		return s;
	}
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
		in.close();
		return obj;
	}
	void printToFile();
	void show();
	void showFaculty();
private:
	int age;
	int height;
	string colorOfEyes;
	string colorOfHair;
	Faculty* sFaculty;
};

