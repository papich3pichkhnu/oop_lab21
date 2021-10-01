#include "Lecturer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
void Lecturer::setName(string _name) { this->name = _name; }
void Lecturer::setName(string _name, string _firstName, string _lastName) { this->name = _name; this->firstName = _firstName; this->lastName = _lastName; }
void Lecturer::setFaculty(Faculty* _f)
{
	this->f = _f;
}
string Lecturer::getFirstName() { return this->firstName; }
string Lecturer::getName() { return this->name; }
string Lecturer::getLastName() { return this->lastName; }
void Lecturer::teaching()
{
	srand(time(NULL));
	vector<Student*> students=this->f->getStudents();
	int cnt = this->disciplines.size();
	int r = rand() % cnt;
	cout << "/*************/" << endl;
	cout << "Teaching discipline " << this->disciplines[r]->getName() << "...." << endl;
	for (Student* st : students)
	{
		int mark = rand() % 5 + 1;
		cout << "Student " << st->getFirstName() << " " << st->getName() << " " << st->getLastName() << " got mark " << mark << endl;
		if (mark < 3)this->f->deductStudent(st);
	}
	cout << "/*************/" << endl;
}
void Lecturer::addDiscipline(Discipline* d)
{
	this->disciplines.push_back(d);
}