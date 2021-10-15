#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <string>
int Faculty::count = 0;
Faculty::Faculty() :facultyName("Faculty"+std::to_string(this->count+1)), abbreviature("F"), decane("Decane"), yearOfCreating(2021),
 numOfSpecs(10), telephoneNumber("3802123456"), email("faculty@khnu.km.ua")
{
	
	cout << "Faculty \"" << this->facultyName << "\" was created" <<endl;
}
Faculty::~Faculty()
{	
	this->students.clear();
	
	cout << "Faculty \"" << this->facultyName << "\" was destroyed"<<endl;
}
Faculty::Faculty(string _fName, string _a, string _d, int _yc, int _nc, int _ns, string _tn, string _e) :
	facultyName(_fName), abbreviature(_a), decane(_d), yearOfCreating(_yc),
	numOfSpecs(_ns), telephoneNumber(_tn), email(_e)
{
	
	cout << "Faculty \"" << this->facultyName << "\" was created"<<endl;
}
void Faculty::setFaculty(string _facultyName) { this->facultyName = _facultyName; }
void Faculty::setFaculty(string _facultyName, string _abbreviature) { this->facultyName = _facultyName; this->abbreviature = _abbreviature; }
void Faculty::setNumericData(int _numOfSpecs) { this->numOfSpecs = _numOfSpecs; }
void Faculty::setInfo(string _decane, int _yearOfCreating, string _telephoneNumber, string _email) {
	this->decane = _decane; this->yearOfCreating = _yearOfCreating; this->telephoneNumber = _telephoneNumber;
	this->email = _email;
}
int Faculty::getNumOfDepartments() {
	return this->departments.size();
}
void Faculty::modifyData(Faculty* faculty) { faculty->abbreviature += "_New"; }
Faculty Faculty::returnWithModifiedData() { this->abbreviature += "New"; return *this; }
void Faculty::printToFile() {
	ofstream out("facfile.txt", ios::out);
	out << this->abbreviature << endl;
	out << this->decane << endl;
	out << this->email << endl;
	out << this->facultyName << endl;
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
	cout << "Student " << s->getFullName()<< " was enroled on the faculty " << this->abbreviature<<endl;

}
void Faculty::deductStudent(Student* s)
{
	bool f = false;
	for (auto it=this->students.begin();it!=this->students.end();it++)
	{
		if (s->getFullName() == (*it)->getFullName())
		{
			this->students.erase(it);
			cout << "Student " << s->getFullName()<<" was deducted from the faculty " << this->abbreviature << endl;
			f = true;
			s->setFaculty(NULL);
			break;
		}
	}
	if (!f)
	{
		cout << "Student " << s->getFullName() << " isn't studiyng on this faculty " << this->abbreviature << endl;
	}
}

void Faculty::addDepartment(Department* s)
{
	this->departments.push_back(s);
	s->setFaculty(this);
	cout << "Department " << s->name << " was added in list of departments of the faculty " << this->abbreviature << endl;
}

void Faculty::deleteDepartment(Department* s)
{
	bool f = false;
	for (auto it = this->departments.begin(); it != this->departments.end(); it++)
	{
		if (s->name == (*it)->name)
		{
			this->departments.erase(it);
			cout << "Department " << s->name << " was deleted from the faculty " << this->abbreviature << endl;
			f = true;
			s->setFaculty(NULL);
			break;
		}
	}
	if (!f)
	{
		cout << "Department " << s->name << " isn't in list of departments on this faculty " << this->abbreviature << endl;
	}
}

Student* findStudent(string _ln, string _fn, string _mn)
{
	return nullptr;
}
vector<Student*> Faculty::getStudents() { return (this->students); }
/*vector<Discipline*> Faculty::getDisciplines() { return (this->disciplines); }
void Faculty::createDisciplines()
{
	int n = 5;
	for (int i = 1; i <= 5; i++)
	{
		Discipline* d = new Discipline(this->facultyName+"_Discipline" + std::to_string(i), "Cathedra", "Exam", 10, 10, 10);
		this->disciplines.push_back(d);
	}
}*/