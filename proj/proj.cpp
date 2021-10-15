#include <iostream>
#include "Faculty.h"
#include "Student.h"
#include "Department.h"
#include "Lecturer.h"
#include "Exam.h"
#include <time.h>
using namespace std;
//task 11
void showSquaredAge(Student s)
{
	cout << "Squared age of student \"" << s.getFullName() << "\": ";
	cout << (s.getAge()) * (s.getAge()) << endl;
}
//task 12
void showSquaredAge(Student* s)
{
	cout << "Squared age of student \"" << s->getFullName() << "\": ";
	cout << (s->getAge()) * (s->getAge()) << endl;
}
//task 13
Student createStudent()
{
	Student s;
	s.setName("Petrov", "Ivan", "Viktorovych");
	s.setData(25, 190);
	s.show();
	return s;
}
int main()
{
	srand(time(NULL));
#pragma region lab2  



	////task 6

	//Faculty faculty1, faculty2, faculty3, faculty4, faculty5;
	//Student* dynamicStudent1 = new Student();
	//Student* dynamicStudent2 = new Student();
	//Student* dynamicStudent3 = new Student();
	//Student* dynamicStudent4 = new Student();
	//Student* dynamicStudent5 = new Student();

	////task 7

	//Faculty arrayFaculties[5] = { faculty1,faculty2,faculty3,faculty4,faculty5 };
	//Student* dynamicArrayStudents[5];
	//dynamicArrayStudents[0] = dynamicStudent1;
	//dynamicArrayStudents[1] = dynamicStudent2;
	//dynamicArrayStudents[2] = dynamicStudent3;
	//dynamicArrayStudents[3] = dynamicStudent4;
	//dynamicArrayStudents[4] = dynamicStudent5;

	////task 8-9

	//cout << "Faculties" << endl;
	//for(int i=0;i<5;i++)
	//{
	//    char n = (char)(int('0') + i + 1);
	//    string sn = ""; sn += n;
	//    arrayFaculties[i].setFaculty("faculty" + sn, "FC" + sn);
	//    arrayFaculties[i].setInfo("decane" + sn, rand() % 20 + 2000, "123456789", "fac"+sn + "@gmail.com");
	//    arrayFaculties[i].setNumericData(rand() % 5 + 10, rand() % 5 + 10);
	//    arrayFaculties[i].modifyData(&arrayFaculties[i]);
	//    arrayFaculties[i] = arrayFaculties[i].returnWithModifiedData();
	//    cout << "Faculty " << i+1 << ":" << endl;
	//    arrayFaculties[i].show();
	//}
	//Faculty fileFaculty;
	//arrayFaculties[0].printToFile();
	//fileFaculty = Faculty::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Faculty written and read from file:" << endl;
	//fileFaculty.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << "Students" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//    cout << "Student " << i + 1<<endl;
	//    if (i % 2 == 0) {
	//        char n = (char)(int('0') + i + 1);
	//        string sn = ""; sn += n;
	//        dynamicArrayStudents[i]->setName("Name" + sn, "FirstName" + sn, "LastName" + sn);
	//        dynamicArrayStudents[i]->setEyesHair("brown", "blonde");
	//        dynamicArrayStudents[i]->setData(18,170);
	//        dynamicArrayStudents[i]->setFaculty(&arrayFaculties[i]);
	//        dynamicArrayStudents[i]->modifyName(dynamicArrayStudents[i]);
	//    }
	//    else {
	//        dynamicArrayStudents[i] = Student::generate();
	//    }
	//    dynamicArrayStudents[i]->show();
	//}
	//Student fileStudent;
	//dynamicArrayStudents[0]->printToFile();
	//fileStudent = Student::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Student written and read from file:" << endl;
	//fileStudent.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << endl;

	////task 10

	//cout << "Basic student and faculty interaction scenario" << endl;
	//Faculty fit;
	//fit.setFaculty("Faculty of information tchnologies", "FIT");
	//fit.setInfo("Savenko_O.S.", 2012, "(0382)67-19-43", "savenko_oleg_st@ukr.net");
	//fit.setNumericData(6, 8);
	//
	//Student stud;
	//stud.setName("Volodymyr", "Avsiievych", "Ruslanovych");
	//stud.setEyesHair("blue", "brown");
	//stud.setData(18, 174);
	//stud.setFaculty(&fit);
	//stud.show();
	//cout << endl;

	////task 11

	//cout << "/********************/" << endl;

	//Faculty* pfit=&fit;
	//pfit->show();

	//cout << "/********************/" << endl;

	////task 12

	//int* array = Faculty::myAlloc();
	//int cnt = 0;
	//while (array[cnt] == 0)cnt++;
	//cout << "Array of numbers of cathedras:" << endl;
	//for (int i = 0; i < cnt; i++)
	//{
	//    array[i] = arrayFaculties[i].getNumOfCathedras();
	//    cout << array[i] << " ";
	//}
	//for (int i = 0; i < cnt; i++)
	//{
	//    for (int j = i + 1; j < cnt; j++)
	//    {
	//        if (array[j] < array[i])swap(array[j], array[i]);
	//    }
	//}
	//cout << endl << "Sorted array of numbers of cathedras:" << endl;
	//for (int i = 0; i < cnt; i++)
	//{       
	//    cout << array[i] << " ";
	//}
#pragma endregion
#pragma region lab2z

 /*Faculty* fit=new Faculty();
 fit->setFaculty("Faculty of information tchnologies", "FIT");
 fit->setInfo("Savenko_O.S.", 2012, "(0382)67-19-43", "savenko_oleg_st@ukr.net");
 fit->setNumericData(6, 8);

 Faculty* afaculty = new Faculty();
 afaculty->setFaculty("Faculty of nothing", "FON");
 afaculty->setInfo("Noone_O.S.", 2038, "(0382)12-34-56", "noone@nomail.net");
 afaculty->setNumericData(10, 20);


 Student* stud1=new Student();
 stud1->setName("Volodymyr", "Avsiievych", "Ruslanovych");
 stud1->setEyesHair("blue", "brown");
 stud1->setData(18, 174);
 Student* stud2 = new Student();
 stud2->setName("Vladyslav", "Avsiievych", "Ruslanovych");
 stud2->setEyesHair("blue", "brown");
 stud2->setData(18, 174);

 fit->enrollStudent(stud1);
 fit->enrollStudent(stud2);

 Discipline* discipline1 = new Discipline("OOP", "KI", "Exam", 10);
 Discipline* discipline2 = new Discipline("CL", "KI", "Course_Project", 10);
 Discipline* discipline3 = new Discipline("SDA", "KI", "Exam", 10);

 Lecturer* lecturer = new Lecturer();
 lecturer->setName("Lysenko", "Sergiy", "Mykolayovych");
 lecturer->addDiscipline(discipline1);
 lecturer->addDiscipline(discipline2);
 lecturer->addDiscipline(discipline3);

 fit->enrollLecturer(lecturer);

 lecturer->teaching();*/
#pragma endregion
#pragma region lab3

 ////task 14
 ////простий
	//Student a("Test", "Test", "Test", 18, 190, "Blue", "White");
	////явний
	//Student b = Student();
	////скорочений
	//Student c;

	////task 11-13
	//showSquaredAge(a);
	//showSquaredAge(&a);
	//Student test = createStudent();
	//test.show();

	////task 15-17
	//Student* pStudent = new Student();


	//Faculty faculty1, faculty2, faculty3, faculty4, faculty5;
	//Student* dynamicStudent1 = new Student();
	//Student* dynamicStudent2 = new Student();
	//Student* dynamicStudent3 = new Student();
	//Student* dynamicStudent4 = new Student();
	//Student* dynamicStudent5 = new Student();
	//
	//Faculty arrayFaculties[5] = { faculty1,faculty2,faculty3,faculty4,faculty5 };
	//Student* dynamicArrayStudents[5];
	//dynamicArrayStudents[0] = dynamicStudent1;
	//dynamicArrayStudents[1] = dynamicStudent2;
	//dynamicArrayStudents[2] = dynamicStudent3;
	//dynamicArrayStudents[3] = dynamicStudent4;
	//dynamicArrayStudents[4] = dynamicStudent5;

	//
	//cout << "Faculties" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	char n = (char)(int('0') + i + 1);
	//	string sn = ""; sn += n;
	//	arrayFaculties[i].setFaculty("faculty" + sn, "FC" + sn);
	//	arrayFaculties[i].setInfo("decane" + sn, rand() % 20 + 2000, "123456789", "fac" + sn + "@gmail.com");
	//	arrayFaculties[i].setNumericData(rand() % 5 + 10);
	//	arrayFaculties[i].modifyData(&arrayFaculties[i]);
	//	arrayFaculties[i] = arrayFaculties[i].returnWithModifiedData();
	//	cout << "Faculty " << i + 1 << ":" << endl;
	//	arrayFaculties[i].show();
	//}
	//
	//Faculty fileFaculty;
	//arrayFaculties[0].printToFile();
	//fileFaculty = Faculty::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Faculty written and read from file:" << endl;
	//fileFaculty.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << "Students" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Student " << i + 1 << endl;
	//	if (i % 2 == 0) {
	//		char n = (char)(int('0') + i + 1);
	//		string sn = ""; sn += n;
	//		dynamicArrayStudents[i]->setName("Name" + sn, "FirstName" + sn, "LastName" + sn);
	//		dynamicArrayStudents[i]->setEyesHair("brown", "blonde");
	//		dynamicArrayStudents[i]->setData(18, 170);
	//		dynamicArrayStudents[i]->setFaculty(&arrayFaculties[i]);
	//		dynamicArrayStudents[i]->modifyName(dynamicArrayStudents[i]);
	//	}
	//	else {
	//		dynamicArrayStudents[i] = Student::generate();
	//	}
	//	dynamicArrayStudents[i]->show();
	//}
	//Student fileStudent;
	//dynamicArrayStudents[0]->printToFile();
	//fileStudent = Student::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Student written and read from file:" << endl;
	//fileStudent.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << endl;
#pragma endregion

	//task 18-21	
	Faculty* FIT = new Faculty("Faculty of information techologies", "FIT", "Savenko O.S.", 2000, 5, 10, "tel", "email");
	
	Department* KIIS = new Department("KIIS");
	Department* KN = new Department("KN");

	FIT->addDepartment(KIIS);
	FIT->addDepartment(KN);

	Student* AVR = new Student("Avsiievych", "Volodymyr", "Ruslanovych", 18, 174, "Green", "Black");
	Student* ARV = new Student("Avsiievych", "Ruslan", "Volodymyrovych", 18, 174, "Green", "Black");
	
	FIT->enrollStudent(AVR);
	FIT->enrollStudent(ARV);

	Discipline* OOP = new Discipline("OOP", "KI", "Exam", 10, 20, 5);
	Discipline* CL = new Discipline("CL", "KI", "Course_Project", 10, 20, 5);
	Discipline* SDA = new Discipline("SDA", "KI", "Exam", 10, 20, 5);

	Lecturer* LSM = new Lecturer("Lysenko", "Sergiy", "Mykolayovych");		
	Lecturer* POO = new Lecturer("Pavlova", "Olga", "Oleksandrivna");		

	KIIS->enrollLecturer(LSM);
	KN->enrollLecturer(POO);

	Exam* eOOP = new Exam(FIT, KIIS, AVR, LSM, OOP);
	eOOP->takeExam("15.10.2021");
	
	//Клас іспит(асоціація) 
}