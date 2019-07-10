#include "Student.h"

Student::Student()
{
}

Student::~Student()
{
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, string studentAge, string *daysInCourse, Degree degree)
{
	_studentID = studentID;
	_studentFirstName = firstName;
	_studentLastName = lastName;
	_studentEmailAddress = emailAddress;
	_studentAge = studentAge;
	//_daysInCourse = *daysInCourse;
	degree = degree;

}

string Student::GetStudentAge()
{
    return _studentAge;
}

void Student::SetStudentAge(int studentAge)
{
    _studentAge = studentAge;
}

string Student::GetStudentID()
{
    return _studentID;
}

void Student::SetStudentID(int studentID)
{
    _studentID = studentID;
}

string Student::GetFirstName()
{
    return _studentFirstName;
}

void Student::SetFirstName(string studentFirstName)
{
    _studentFirstName = studentFirstName;
}

string Student::GetLastName()
{
    return _studentLastName;
}

void Student::SetLastName(string studentLastName)
{
    _studentLastName = studentLastName;
}

string Student::GetEmailAddress()
{
    return _studentEmailAddress;
}

void Student::SetEmailAddress(string studentEmailAddress)
{
    _studentEmailAddress = studentEmailAddress;
}

string *Student::GetDaysInCourse()
{
    return _daysInCourse;
}

void Student::SetDaysInCourse(int valueToAdd[], int index)
{
    for(int i = 0; i < sizeof(index - 1); i++)
    {
        _daysInCourse[i] = valueToAdd[i];
    }
}