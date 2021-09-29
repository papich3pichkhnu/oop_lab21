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
