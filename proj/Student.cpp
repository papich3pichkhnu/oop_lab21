#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
int Student::count = 0;
Student::Student():lastName("Last name"),firstName("First name"),middleName("Middle name"),
age(18),height(170),colorOfEyes("Brown"),colorOfHair("Black"), sFaculty(nullptr)
{
	cout << "Student \"" << this->getFullName() << "\" was created"<<endl;
	++Student::count;
}
Student::~Student()
{
	cout << "Student \"" << this->getFullName() << "\" was destroyed"<<endl;
	this->sFaculty = nullptr;
	++Student::count;
}
Student::Student(string _ln, string _fn, string _mn, int _a, int _h, string _coe, string _coh) :
	lastName(_ln), firstName(_fn), middleName(_mn),
	age(_a), height(_h), colorOfEyes(_coe), colorOfHair(_coh), sFaculty(nullptr)
{

	cout << "Student \"" << this->getFullName() << "\" was created"<<endl;	
	++Student::count;
}

void Student::setName(string _name) { this->firstName = _name; }
void Student::setName(string _lName, string _fName, string _mName) { this->lastName = _lName; this->firstName = _fName; this->middleName = _mName; }
void Student::setData(int _age) { this->age = _age; }
void Student::setData(int _age, int _height) { this->age = _age; this->height = _height; }
void Student::setEyesHair(string _colorOfEyes, string _colorOfHair) { this->colorOfEyes = _colorOfEyes; this->colorOfHair = _colorOfHair; }
void Student::modifyName(Student* s) { this->firstName = "St." + this->firstName; }
void Student::setFaculty(Faculty* _sFaculty) { this->sFaculty = _sFaculty; }

void Student::printToFile()
{
	ofstream out("studfile.txt", ios::out);
	out << this->lastName<<endl;
	out << this->firstName << endl;
	out << this->middleName << endl;
	out << this->age << endl;
	out << this->height << endl;
	out << this->colorOfEyes << endl;
	out << this->colorOfHair << endl;
	out.close();
}
void Student::show()
{
	cout << "Student ";
	cout << "Last name: "; cout << this->lastName << endl;
	cout << "First name: "; cout << this->firstName << endl;
	cout << "Middle name: "; cout << this->middleName << endl;
	cout << "Age: "; cout << this->age << " years" << endl;
	cout << "Height: "; cout << this->height << " cm" << endl;
	cout << "Color of eyes: ";  cout << this->colorOfEyes << endl;
	cout << "Color of hair: "; cout << this->colorOfHair << endl;
	cout << "Faculty of the student: "<<endl; this->showFaculty();
	cout << endl;
}
void Student::showFaculty() {
	if (this->sFaculty != NULL)
	{
		this->sFaculty->show();
		
	}
	else cout << "None";
}
Student* Student::generate() {
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
	s->firstName = "None";
	s->lastName = "None";
	s->sFaculty = NULL;
	return s;
}
Student Student::readFromFile()
{
	Student obj;
	ifstream in("studfile.txt", ios::in);
	in >> obj.lastName;
	in >> obj.firstName;
	in >> obj.middleName;
	in >> obj.age;
	in >> obj.height;
	in >> obj.colorOfEyes;
	in >> obj.colorOfHair;
	in.close();
	return obj;
}
string Student::getFirstName() { return this->firstName; }
string Student::getMiddleName() { return this->middleName; }
string Student::getLastName() { return this->lastName; }
string Student::getFullName() { return this->lastName + " "+this->firstName + " " +this->middleName; }
int Student::getAge() { return this->age; }
void Student::speak(Student* another)
{
	cout << "Student " << this->getFullName() << " is speaking with student " << another->getFullName();
}