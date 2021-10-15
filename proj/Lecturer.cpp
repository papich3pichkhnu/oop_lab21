#include "Lecturer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
Lecturer::Lecturer():lastName("Last name"),firstName("First name"),middleName("Middle name"),
d(nullptr){
	cout << "Lecturer \"" << this->getFullName() << "\" was created"<<endl;
}
Lecturer::~Lecturer()
{
	this->d = nullptr;
	
	cout << "Lecturer \"" << this->getFullName() << "\" was destroyed" << endl;	
}
Lecturer::Lecturer(string _lName, string _fName, string _mName):lastName(_lName),firstName(_fName),middleName(_mName)
{
	cout << "Lecturer \"" << this->getFullName() << "\" was created" << endl;
}

string Lecturer::getFirstName() { return this->firstName; }
string Lecturer::getMiddleName() { return this->middleName; }
string Lecturer::getLastName() { return this->lastName; }
string Lecturer::getFullName() {
	return this->lastName + " " + this->firstName + " " + this->middleName;
}
void Lecturer::setName(string _name) { this->firstName = _name; }
void Lecturer::setName(string _lName, string _fName, string _mName) { this->lastName = _lName; this->firstName = _fName; this->middleName = _mName; }

void Lecturer::setDepartment(Department* d)
{
	this->d = d;
}

/*void Lecturer::teaching()
{
	srand(time(NULL));
	vector<Student*> students=this->f->getStudents();
	int cnt = this->disciplines.size();	
	int r = rand() % cnt;
	cout << "" << endl;
	cout << "Teaching discipline " << this->disciplines[r]->getName() << "...." << endl;
	for (Student* st : students)
	{
		int mark = rand() % 5 + 1;
		cout << "Student " << st->getFullName()<<" got mark " << mark << endl;
		if (mark < 3)this->f->deductStudent(st);
	}
	cout << "" << endl;
}
void Lecturer::addDiscipline(Discipline* d)
{
	this->disciplines.push_back(d);
}*/
void Lecturer::printToFile()
{
	ofstream out("lecturerfile.txt", ios::out);
	out << this->lastName << endl;
	out << this->firstName << endl;
	out << this->middleName << endl;	
	out.close();
}
Lecturer Lecturer::readFromFile()
{
	Lecturer obj;
	ifstream in("lecturerfile.txt", ios::in);
	in >> obj.lastName;
	in >> obj.firstName;
	in >> obj.middleName;	
	return obj;
}