#include "Student.h"

class SoftwareStudent : public Student
{
public:

	//using Student::Student;

	SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree);
	~SoftwareStudent();
	Degree GetDegreeProgram() override;
    
private:
    Degree _degreeType;
    

};

