#include <iostream>
#include "Faculty.h"
#include "Student.h"
using namespace std;
int main()
{
    //task 6
    Faculty faculty1, faculty2, faculty3, faculty4, faculty5;
    Faculty* dynamicFaculty1 = new Faculty();
    Faculty* dynamicFaculty2 = new Faculty();
    Faculty* dynamicFaculty3 = new Faculty();
    Faculty* dynamicFaculty4 = new Faculty();
    Faculty* dynamicFaculty5 = new Faculty();
    //task 7
    Faculty arrayFaculties[5] = { faculty1,faculty2,faculty3,faculty4,faculty5};
    Faculty* dynamicArrayFaculties[5];
    dynamicArrayFaculties[0] = dynamicFaculty1;
    dynamicArrayFaculties[1] = dynamicFaculty2;
    dynamicArrayFaculties[2] = dynamicFaculty3;
    dynamicArrayFaculties[3] = dynamicFaculty4;
    dynamicArrayFaculties[4] = dynamicFaculty5;
    //task 8-9

}

