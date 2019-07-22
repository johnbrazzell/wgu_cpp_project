#include "Student.h"

class NetworkingStudent : public Student
{
public:
	NetworkingStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, Degree degree);
    ~NetworkingStudent();
	
	Degree GetDegreeProgram() override;
    
private:
    Degree _degreeType = Degree::NETWORKING;

};

