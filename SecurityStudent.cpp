#include "SecurityStudent.h"


SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree)
{
	SecurityStudent::SetStudentID(studentID);
	SecurityStudent::SetFirstName(firstName);
	SecurityStudent::SetLastName(lastName);
	SecurityStudent::SetEmailAddress(emailAddress);
	SecurityStudent::SetStudentAge(studentAge);
	SecurityStudent::SetDaysInCourse(daysInCourse);
	SecurityStudent::SetDegreeProgram(SecurityStudent::GetDegreeProgram());
}
SecurityStudent::~SecurityStudent()
{
}

Degree SecurityStudent::GetDegreeProgram()
{
	return _degreeType;
}

void SecurityStudent::Print()
{
	string degree = "SECURITY";
	cout << SecurityStudent::GetStudentID() << "\t" << SecurityStudent::GetFirstName() << "\t" << SecurityStudent::GetLastName() << "\t\t" << SecurityStudent::GetEmailAddress() << "\t\t" << SecurityStudent::GetStudentAge() << "\t" << SecurityStudent::GetDaysInCourse()[0] << "," << SecurityStudent::GetDaysInCourse()[1] << "," << SecurityStudent::GetDaysInCourse()[2] << "\t" << degree << endl;
}

