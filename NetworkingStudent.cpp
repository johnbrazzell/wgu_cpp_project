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

void NetworkingStudent::Print()
{
	string degree = "NETWORKING";
	cout << NetworkingStudent::GetStudentID() << "\t" << NetworkingStudent::GetFirstName() << "\t" << NetworkingStudent::GetLastName() << "\t\t" << NetworkingStudent::GetEmailAddress() << "\t\t" << NetworkingStudent::GetStudentAge() << "\t" << NetworkingStudent::GetDaysInCourse()[0] << "," << NetworkingStudent::GetDaysInCourse()[1] << "," << NetworkingStudent::GetDaysInCourse()[2] << "\t" << degree << endl;
}

