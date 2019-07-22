#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include "Degree.h"
#include "Student.h"
#include "NetworkingStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
using namespace std;

class Roster
{
public:
    Roster();
    ~Roster();
    // for each index add
    // 
	void Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);

	void Remove(string studentID);

	void PrintAll();

	void PrintAverageDaysInCourse(string studentID); //Print average days in course

	void PrintInvalidEmails(); //Print out invalid email addresses

	void PrintByDegreeProgram(int degreeProgram);
	
	Degree security = Degree::SECURITY;
	Degree networking = Degree::NETWORKING;
	Degree software = Degree::SOFTWARE;
	int SOFTWARE = (int)software;
	int SECURITY = (int)security;
	int NETWORKING = (int)networking;
    
	Student *_classRosterArray[5] = {nullptr};
private:


	
};

