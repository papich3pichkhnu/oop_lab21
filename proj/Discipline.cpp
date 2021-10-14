#include "Discipline.h"
#include <iostream>
#include <fstream>
#include <string>

Discipline::Discipline(string _n, string _c, string _t, int _cr, int _nh, int _ncw) :
	name(_n), cathedra(_c), typeOfControl(_t), credits(_cr), numberOfHours(_nh), numberOfControlWorks(_ncw)
{
	cout << "Discipline \"" << _n << "\" was created" << endl;
}
Discipline::Discipline() : name("Discipline"), cathedra("Cathedra"),
typeOfControl("Exam"), credits(60),
numberOfHours(20), numberOfControlWorks(5)
{
	cout << "Discipline \"" << "Discipline" << "\" was created" << endl;
}
Discipline::~Discipline()
{
	cout << "Discipline \"" << this->name << "\" was destroyed" << endl;
}
Discipline::Discipline(const Discipline& _d) :
	name(_d.name), cathedra(_d.cathedra), typeOfControl(_d.typeOfControl), credits(_d.credits),
	numberOfHours(_d.numberOfHours), numberOfControlWorks(_d.numberOfControlWorks)
{
	cout << "Discipline \"" << _d.name << "\" was copied" << endl;
}
string Discipline::getName() {
	return this->name;
}
string Discipline::getCathedra() {
	return this->cathedra;
}
string Discipline::getTypeOfControl() {
	return this->typeOfControl;
}
int Discipline::getCredits() {
	return this->credits;
}
int Discipline::getNumberOfControlWorks() {
	return this->numberOfControlWorks;
}
int Discipline::getNumberOfHours() {
	return this->numberOfHours;
}
void Discipline::printToFile()
{
	ofstream out("discfile.txt", ios::out);
	out << this->name << endl;
	out << this->cathedra << endl;
	out << this->credits << endl;
	out << this->numberOfControlWorks << endl;
	out << this->numberOfHours << endl;
	out << this->typeOfControl << endl;
	out.close();
}
Discipline Discipline::readFromFile()
{
	Discipline obj;
	ifstream in("discfile.txt", ios::in);
	in >> obj.name;
	in >> obj.cathedra;
	in >> obj.credits;
	in >> obj.numberOfControlWorks;
	in >> obj.numberOfHours;
	in >> obj.typeOfControl;
	in.close();
	return obj;
}