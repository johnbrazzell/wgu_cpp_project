#include "Student.h"

class SecurityStudent : public Student
{
public:
	SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree);
	~SecurityStudent();
	Degree GetDegreeProgram() override;
	void Print() override;

private: 
    Degree _degreeType = Degree::SECURITY;

};


