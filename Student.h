#include "Degree.h"
#include <string>
#include <array>
#include <iostream>
using namespace std;

#pragma once

class Student
{
public:
    Student();
    ~Student();

	//Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree);
	Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree);

    int GetStudentAge();
    void SetStudentAge(int studentAge);
    
    string GetStudentID();
    void SetStudentID(string studentId);
    
    string GetFirstName();
    void SetFirstName(string studentFirstName);
    
    string GetLastName();
    void SetLastName(string studentLastName);
    
    string GetEmailAddress();
    void SetEmailAddress(string studentEmailAddress);
    
    int *GetDaysInCourse();
    //void SetDaysInCourse(int numberOfDaysToAdd[], int index);
	void SetDaysInCourse(int *daysInCourse);
	void SetDegreeProgram(Degree degree);
    virtual Degree GetDegreeProgram();
	virtual void Print();

	const int SECURITY = static_cast<int>(Degree::SECURITY);
	const int NETWORKING = static_cast<int>(Degree::NETWORKING);
	const int SOFTWARE = static_cast<int>(Degree::SOFTWARE);
	//virtual void Print();


private:
    int _studentAge;
    int _daysInCourse[3];
    string _studentID;
    string _studentFirstName;
    string _studentLastName;
    string _studentEmailAddress;
	Degree _degree;
    
};

