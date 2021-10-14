#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Discipline
{
private:	
	int credits;
	int numberOfHours;
	int numberOfControlWorks;
public:
	string name;
	string cathedra;
	string typeOfControl;
	Discipline(string _n, string _c, string _t, int _cr, int _nh, int _ncw);
	Discipline();
	~Discipline();
	Discipline(const Discipline &_d);
	string getName();
	string getCathedra();
	string getTypeOfControl();	
	int getCredits();
	int getNumberOfHours();
	int getNumberOfControlWorks();
	void printToFile();
	static Discipline readFromFile();
	
};

