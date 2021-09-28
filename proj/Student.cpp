#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
void Student::setName(string _name) { this->name = _name; }
void Student::setName(string _name, string _firstName, string _lastName) { this->name = _name; this->firstName = _firstName; this->lastName = _lastName; }
void Student::setData(int _age) { this->age = _age; }
void Student::setData(int _age, int _height) { this->age = _age; this->height = _height; }
void Student::setEyesHair(string _colorOfEyes, string _colorOfHair) { this->colorOfEyes = _colorOfEyes; this->colorOfHair = _colorOfHair; }
void Student::modifyName(Student* s) { this->name = "St." + this->name; }
void Student::setFaculty(Faculty* _sFaculty) { this->sFaculty = _sFaculty; }

void Student::printToFile()
{
	ofstream out("studfile.txt", ios::out);
	out << this->firstName<<endl;
	out << this->name << endl;
	out << this->lastName << endl;
	out << this->age << endl;
	out << this->height << endl;
	out << this->colorOfEyes << endl;
	out << this->colorOfHair << endl;
	out.close();
}
void Student::show()
{
	cout << "Student ";
	cout << "First name: "; cout << this->firstName << endl;
	cout << "Name: "; cout << this->name << endl;
	cout << "Last name: "; cout << this->lastName << endl;
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