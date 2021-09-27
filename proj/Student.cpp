#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
Student Student::readFromFile()
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