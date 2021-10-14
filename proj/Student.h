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
	public:
		string lastName;
		string firstName;
		string middleName;
		static int count;
		Student();		
		~Student();
		Student(string _ln, string _fn, string _mn, int _a, int _h, string _coe, string _coh);
		void setName(string _lName);
		void setName(string _lName, string _fName, string _mName);
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
		string getMiddleName();
		string getLastName();
		string getFullName();
		int getAge();
		void speak(Student* another);
	};

