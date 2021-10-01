#pragma once
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Faculty;
	class Student
	{
	private:
		int age;
		int height;
		string colorOfEyes;
		string colorOfHair;
		Faculty* sFaculty;	
		string firstName;
		string name;
		string lastName;
	public:
		void setName(string _name);
		void setName(string _name, string _firstName, string _lastName);
		void setData(int _age);
		void setData(int _age, int _height);
		void setEyesHair(string _colorOfEyes, string _colorOfHair);
		void modifyName(Student* s);
		void setFaculty(Faculty* _sFaculty);
		static Student* generate();
		static Student readFromFile();
		void printToFile();
		void show();
		void showFaculty();
		string getFirstName();
		string getName();
		string getLastName();
	};

