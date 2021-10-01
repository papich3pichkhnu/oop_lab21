#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Discipline
{
private:
	string name;
	string cathedra;
	string typeOfControl;
	int credits;
public:
	Discipline(string _n, string _c, string _t, int _cr) :name(_n), cathedra(_c), typeOfControl(_t), credits(_cr) {}
	string getName();
	string getCathedra();
	string getTypeOfControl();
	int getCredits();
};

