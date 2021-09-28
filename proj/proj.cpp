#include <iostream>
#include "Faculty.h"
#include "Student.h"
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));

    //task 6

    Faculty faculty1, faculty2, faculty3, faculty4, faculty5;
    Student* dynamicStudent1 = new Student();
    Student* dynamicStudent2 = new Student();
    Student* dynamicStudent3 = new Student();
    Student* dynamicStudent4 = new Student();
    Student* dynamicStudent5 = new Student();

    //task 7

    Faculty arrayFaculties[5] = { faculty1,faculty2,faculty3,faculty4,faculty5 };
    Student* dynamicArrayStudents[5];
    dynamicArrayStudents[0] = dynamicStudent1;
    dynamicArrayStudents[1] = dynamicStudent2;
    dynamicArrayStudents[2] = dynamicStudent3;
    dynamicArrayStudents[3] = dynamicStudent4;
    dynamicArrayStudents[4] = dynamicStudent5;

    //task 8-9

    cout << "Faculties" << endl;
    for(int i=0;i<5;i++)
    {
        char n = (char)(int('0') + i + 1);
        string sn = ""; sn += n;
        arrayFaculties[i].setFaculty("faculty" + sn, "FC" + sn);
        arrayFaculties[i].setInfo("decane" + sn, rand() % 20 + 2000, "123456789", "fac"+sn + "@gmail.com");
        arrayFaculties[i].setNumericData(rand() % 5 + 10, rand() % 5 + 10);
        arrayFaculties[i].modifyData(&arrayFaculties[i]);
        arrayFaculties[i] = arrayFaculties[i].returnWithModifiedData();
        cout << "Faculty " << i+1 << ":" << endl;
        arrayFaculties[i].show();
    }
    Faculty fileFaculty;
    arrayFaculties[0].printToFile();
    fileFaculty = Faculty::readFromFile();
    cout << "/********************/" << endl;
    cout << "Faculty written and read from file:" << endl;
    fileFaculty.show();
    cout << endl;
    cout << "/********************/" << endl;
    cout << "Students" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1<<endl;
        if (i % 2 == 0) {
            char n = (char)(int('0') + i + 1);
            string sn = ""; sn += n;
            dynamicArrayStudents[i]->setName("Name" + sn, "FirstName" + sn, "LastName" + sn);
            dynamicArrayStudents[i]->setEyesHair("brown", "blonde");
            dynamicArrayStudents[i]->setData(18,170);
            dynamicArrayStudents[i]->setFaculty(&arrayFaculties[i]);
            dynamicArrayStudents[i]->modifyName(dynamicArrayStudents[i]);
        }
        else {
            dynamicArrayStudents[i] = Student::generate();
        }
        dynamicArrayStudents[i]->show();
    }
    Student fileStudent;
    dynamicArrayStudents[0]->printToFile();
    fileStudent = Student::readFromFile();
    cout << "/********************/" << endl;
    cout << "Student written and read from file:" << endl;
    fileStudent.show();
    cout << endl;
    cout << "/********************/" << endl;
    cout << endl;

    //task 10

    cout << "Basic student and faculty interaction scenario" << endl;
    char n = (char)(int('0') + i + 1);
    string sn = ""; sn += n;
    arrayFaculties[i].setFaculty("faculty" + sn, "FC" + sn);
    arrayFaculties[i].setInfo("decane" + sn, rand() % 20 + 2000, "123456789", "fac" + sn + "@gmail.com");
    arrayFaculties[i].setNumericData(rand() % 5 + 10, rand() % 5 + 10);
    arrayFaculties[i].modifyData(&arrayFaculties[i]);
    arrayFaculties[i] = arrayFaculties[i].returnWithModifiedData();
    cout << "Faculty " << i + 1 << ":" << endl;
    arrayFaculties[i].show();

}