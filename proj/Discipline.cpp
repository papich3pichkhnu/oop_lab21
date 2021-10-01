#include "Discipline.h"
#include <iostream>
#include <fstream>
#include <string>
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