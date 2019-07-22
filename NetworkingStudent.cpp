#include "NetworkingStudent.h"


NetworkingStudent::NetworkingStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree)
{
	NetworkingStudent::SetStudentID(studentID);
	NetworkingStudent::SetFirstName(firstName);
	NetworkingStudent::SetLastName(lastName);
	NetworkingStudent::SetEmailAddress(emailAddress);
	NetworkingStudent::SetStudentAge(studentAge);
	NetworkingStudent::SetDaysInCourse(daysInCourse);
	NetworkingStudent::SetDegreeProgram(NetworkingStudent::GetDegreeProgram());
}

NetworkingStudent::~NetworkingStudent()
{
}

Degree NetworkingStudent::GetDegreeProgram()
{
	return _degreeType;
}

