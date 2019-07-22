#include "SoftwareStudent.h"


SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree)
{
	SoftwareStudent::SetStudentID(studentID);
	SoftwareStudent::SetFirstName(firstName);
	SoftwareStudent::SetLastName(lastName);
	SoftwareStudent::SetEmailAddress(emailAddress);
	SoftwareStudent::SetStudentAge(studentAge);
	SoftwareStudent::SetDaysInCourse(daysInCourse);
	SoftwareStudent::SetDegreeProgram(SoftwareStudent::GetDegreeProgram());
}


SoftwareStudent::~SoftwareStudent()
{
}

Degree SoftwareStudent::GetDegreeProgram()
{
	return _degreeType;
}

