#include "Student.h"

class SoftwareStudent : public Student
{
public:

	

	SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree);
	~SoftwareStudent();
	Degree GetDegreeProgram() override;
	void Print() override;

private:
    Degree _degreeType = Degree::SOFTWARE;
    

};

