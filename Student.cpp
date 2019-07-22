#include "Student.h"

Student::Student()
{
	_studentID = "00000000";
	_studentFirstName = "Default First Name";
	_studentLastName = "Default Last Name";
	_studentEmailAddress = "defaultemailaddress@provider.com";
	_studentAge = 0;
	_daysInCourse[0] = 0;
	_daysInCourse[1] = 0;
	_daysInCourse[2] = 0;
	_degree = Degree::SOFTWARE;

}

Student::~Student()
{
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree)
{
	_studentID = studentID;
	_studentFirstName = firstName;
	_studentLastName = lastName;
	_studentEmailAddress = emailAddress;
	_studentAge = studentAge;
	_daysInCourse[0] = daysInCourse[0];
	_daysInCourse[1] = daysInCourse[1];
	_daysInCourse[2] = daysInCourse[2];


}

int Student::GetStudentAge()
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

void Student::SetStudentID(string studentID)
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

int *Student::GetDaysInCourse()
{
    return _daysInCourse;
}

void Student::SetDaysInCourse(int *daysInCourse)
{
	_daysInCourse[0] = daysInCourse[0];
	_daysInCourse[1] = daysInCourse[1];
	_daysInCourse[2] = daysInCourse[2];
}

void Student::SetDegreeProgram(Degree degree)
{
	_degree = degree;
}

Degree Student::GetDegreeProgram()
{
	return _degree;
}

void Student::Print()
{
	string degree;
	if (_degree == Degree::SOFTWARE)
	{
		degree = "SOFTWARE";
	}
	else if (_degree == Degree::NETWORKING)
	{
		degree = "NETWORKING";
	}
	else if (_degree == Degree::SECURITY)
	{
		degree = "SECURITY";
	}
	cout << _studentID << "\t" << _studentFirstName << "\t" << _studentLastName << "\t\t" << _studentEmailAddress << "\t\t" << _studentAge << "\t" << _daysInCourse[0] << "," << _daysInCourse[1] << "," << _daysInCourse[2] << "\t" << degree << endl;
}
