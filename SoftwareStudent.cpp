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

void SoftwareStudent::Print()
{

	string degree = "SOFTWARE";
	cout << SoftwareStudent::GetStudentID() << "\t" << SoftwareStudent::GetFirstName() << "\t" << SoftwareStudent::GetLastName() << "\t\t" << SoftwareStudent::GetEmailAddress() << "\t\t" << SoftwareStudent::GetStudentAge() << "\t" << SoftwareStudent::GetDaysInCourse()[0] << "," << SoftwareStudent::GetDaysInCourse()[1] << "," << SoftwareStudent::GetDaysInCourse()[2] << "\t" << degree << endl;
}

