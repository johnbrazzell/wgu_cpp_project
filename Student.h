#include "Degree.h"
#include <string>
#include <array>
using namespace std;

class Student
{
public:
    Student();
    ~Student();

	Student(string studentID, string firstName, string lastName, string emailAddress, string studentAge, string *daysInCourse, Degree degree);

    string GetStudentAge();
    void SetStudentAge(int studentAge);
    
    string GetStudentID();
    void SetStudentID(int studentId);
    
    string GetFirstName();
    void SetFirstName(string studentFirstName);
    
    string GetLastName();
    void SetLastName(string studentLastName);
    
    string GetEmailAddress();
    void SetEmailAddress(string studentEmailAddress);
    
    string *GetDaysInCourse();
    void SetDaysInCourse(int valueToAdd[], int index);
    
    //virtual GetDegreeProgram();

private:
    string _studentAge;
    string _studentID;
    string _studentFirstName;
    string _studentLastName;
    string _studentEmailAddress;
    string _daysInCourse[4];
    
    
};

