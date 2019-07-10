#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include "Degree.h"
#include <string>
#include <array>
using namespace std;

class Student
{
public:
    Student();
    ~Student();
    int GetStudentAge();
    void SetStudentAge(int studentAge);
    
    int GetStudentID();
    void SetStudentID(int studentId);
    
    string GetFirstName();
    void SetFirstName(string studentFirstName);
    
    string GetLastName();
    void SetLastName(string studentLastName);
    
    string GetEmailAddress();
    void SetEmailAddress(string studentEmailAddress);
    
    int *GetDaysInCourse();
    void SetDaysInCourse(int valueToAdd[], int index);
    
    //virtual GetDegreeProgram();

private:
    int _studentAge;
    int _studentID;
    string _studentFirstName;
    string _studentLastName;
    string _studentEmailAddress;
    int _daysInCourse[4];
    
    
};

#endif // STUDENT_H
