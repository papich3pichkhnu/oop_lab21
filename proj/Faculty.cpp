#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <string>
void Faculty::setFaculty(string _facultyName) { this->facultyName = _facultyName; }
void Faculty::setFaculty(string _facultyName, string _abbreviature) { this->facultyName = _facultyName; this->abbreviature = _abbreviature; }
void Faculty::setNumericData(int _numOfCathedras) { this->numOfCathedras = _numOfCathedras; }
void Faculty::setNumericData(int _numOfCathedras, int _numOfSpecs) { this->numOfCathedras = _numOfCathedras; this->numOfSpecs = _numOfSpecs; }
void Faculty::setInfo(string _decane, int _yearOfCreating, string _telephoneNumber, string _email) {
	this->decane = _decane; this->yearOfCreating = _yearOfCreating; this->telephoneNumber = _telephoneNumber;
	this->email = _email;
}
int Faculty::getNumOfCathedras() {
	return this->numOfCathedras;
}
void Faculty::modifyData(Faculty* faculty) { faculty->abbreviature += "_New"; }
Faculty Faculty::returnWithModifiedData() { this->abbreviature += "New"; return *this; }
void Faculty::printToFile() {
	ofstream out("facfile.txt", ios::out);
	out << this->abbreviature << endl;
	out << this->decane << endl;
	out << this->email << endl;
	out << this->facultyName << endl;
	out << this->numOfCathedras << endl;
	out << this->numOfSpecs << endl;
	out << this->telephoneNumber << endl;
	out << this->yearOfCreating << endl;
	out.close();
}
void Faculty::show() {
	
	cout << "Abbreviature: "; cout << this->abbreviature << endl;
	cout << "Decane: ";cout << this->decane << endl;
	cout << "Email: ";cout << this->email << endl;
	cout << "Faculty name: ";cout << this->facultyName << endl;
	cout << "Num of cathedras: ";cout << this->numOfCathedras << endl;
	cout << "Num of majors: ";cout << this->numOfSpecs << endl;
	cout << "Telephone number: ";cout << this->telephoneNumber << endl;
	cout << "Year of creating: ";cout << this->yearOfCreating << endl;
	cout << endl;
}
Faculty Faculty::readFromFile() {
	Faculty obj;
	ifstream in("facfile.txt", ios::in);
	in >> obj.abbreviature;
	in >> obj.decane;
	in >> obj.email;
	in >> obj.facultyName;
	in >> obj.numOfCathedras;
	in >> obj.numOfSpecs;
	in >> obj.telephoneNumber;
	in >> obj.yearOfCreating;
	in.close();
	return obj;
}
int* Faculty::myAlloc()
{
	int r = rand() % 4 + 2;
	int* arr{ new int[r] {0} };
	return arr;
}
void Faculty::enrollStudent(Student* s)
{
	this->students.push_back(s);
	s->setFaculty(this);
	cout << "Student " << s->getFirstName() << " " << s->getName() << " " << s->getLastName() << " was enroled on the faculty " << this->abbreviature<<endl;

}
void Faculty::deductStudent(Student* s)
{
	bool f = false;
	for (auto it=this->students.begin();it!=this->students.end();it++)
	{
		if (s->getFirstName() == (*it)->getFirstName() && s->getName() == (*it)->getName() && s->getLastName() == (*it)->getLastName())
		{
			this->students.erase(it);
			cout << "Student " << s->getFirstName() << " " << s->getName() << " " << s->getLastName() << " was deducted from the faculty " << this->abbreviature << endl;
			f = true;
			s->setFaculty(NULL);
			break;
		}
	}
	if (!f)
	{
		cout << "Student " << s->getFirstName() << " " << s->getName() << " " << s->getLastName() << " isn't studiyng on this faculty " << this->abbreviature << endl;
	}
}
void Faculty::enrollLecturer(Lecturer* s)
{
	this->lecturers.push_back(s);
	s->setFaculty(this);
	cout << "Lecturer " << s->getFirstName() << " " << s->getName() << " " << s->getLastName() << " was enroled on the faculty " << this->abbreviature << endl;

}
void Faculty::deductLecturer(Lecturer* s)
{
	bool f = false;
	for (auto it = this->lecturers.begin(); it != this->lecturers.end(); it++)
	{
		if (s->getFirstName() == (*it)->getFirstName() && s->getName() == (*it)->getName() && s->getLastName() == (*it)->getLastName())
		{
			this->lecturers.erase(it);
			cout << "Lecturer " << s->getFirstName() << " " << s->getName() << " " << s->getLastName() << " was deducted from the faculty " << this->abbreviature << endl;
			f = true;
			s->setFaculty(NULL);
			break;
		}
	}
	if (!f)
	{
		cout << "Lecturer " << s->getFirstName() << " " << s->getName() << " " << s->getLastName() << " isn't teaching on this faculty " << this->abbreviature << endl;
	}
}
vector<Student*> Faculty::getStudents() { return this->students; }