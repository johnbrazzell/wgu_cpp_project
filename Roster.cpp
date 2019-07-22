#include <sstream>
#include "Degree.h"
#include "Roster.h"

Roster::Roster()
{
	
}

Roster::~Roster()
{
}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{
	for (int i = 0; i < 5; i++)
	{
		int tempDaysArr[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
		if (_classRosterArray[i] == nullptr)
		{
			if (degreeProgram == Degree::SOFTWARE)
			{
				_classRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, tempDaysArr, degreeProgram);
				break;
			}
			else if (degreeProgram == Degree::SECURITY)
			{
				_classRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, tempDaysArr, degreeProgram);
				break;
			}
			else if (degreeProgram == Degree::NETWORKING)
			{
				_classRosterArray[i] = new NetworkingStudent(studentID, firstName, lastName, emailAddress, age, tempDaysArr, degreeProgram);
				break;
			}
		}

	}

}

void Roster::Remove(string studentID)
{
	for (int i = 0; i < 5; i++)
	{
		if (_classRosterArray[i]->GetStudentID() == studentID)
		{
			_classRosterArray[i]->SetStudentID(" ");
			cout << "Student ID: " << studentID << " has been removed!" << endl;
			break;
		}
		else
		{
			cout << "Roster does not contain Student ID: " << studentID << endl;
			break;
		}

	}
}

void Roster::PrintAll()
{
	int rosterCount = 1;

	for (int i = 0; i < 5; i++)
	{

		//cout << rosterCount << " First Name: " << _classRosterArray[i]->GetFirstName() << "\t" << " Last Name: " << _classRosterArray[i]->GetLastName() << "\t"
		//	<< " Age: " << _classRosterArray[i]->GetStudentAge() << "\t" << " Days In Course: " << _classRosterArray[i]->GetDaysInCourse() << "\t" << " Degree Program: " << _classRosterArray[i]->GetDegreeProgram << endl;
		cout << rosterCount << "\t";
		_classRosterArray[i]->Print();
		rosterCount++;
	}
}

void Roster::PrintAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < 5; i++)
	{
		if (_classRosterArray[i]->GetStudentID() == studentID)
		{
			int averageDays = _classRosterArray[i]->GetDaysInCourse()[0] + _classRosterArray[i]->GetDaysInCourse()[0] + _classRosterArray[i]->GetDaysInCourse()[0];
			cout << "Student Number: " << studentID << " has an average of " << averageDays << " days in their three courses" << endl;
			break;
		}
		else
		{
			cout << "Student Not Found!" << endl;
			break;
		}
	}

}

void Roster::PrintInvalidEmails()
{
}

void Roster::PrintByDegreeProgram(int degreeProgram)
{
	for (int i = 0; i < 5; i++)
	{
		cout << (int)_classRosterArray[i]->GetDegreeProgram() << endl;

			if (degreeProgram == (int)_classRosterArray[i]->GetDegreeProgram())
			{
				_classRosterArray[i]->Print();
			}
			else if (degreeProgram == (int)_classRosterArray[i]->GetDegreeProgram())
			{
				_classRosterArray[i]->Print();
			}
			else if (degreeProgram == (int)_classRosterArray[i]->GetDegreeProgram())
			{
				_classRosterArray[i]->Print();
			}
		
	}
}




int main()
{


	const string studentTableData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY","A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK","A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE","A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY","A5,John,Brazzell,jbrazze@wgu.edu,29,10,20,30,SOFTWARE" };
	
	Roster classRoster;

	Degree degree;

	for (int i = 0; i < 5; i++)
	{
		const char streamDelimiter = ',';
		istringstream inSS(studentTableData[i]);
		string tempArray[9];
		string tempString;
		int arrCount = 0;

		while (getline(inSS, tempString, streamDelimiter))
		{
			tempArray[arrCount] = tempString;
			arrCount++;
			//tempVector.push_back(tempString);
			if (tempArray[8] == "SECURITY")
			{
				//add new student by using security constructor
				//cout << "SECURITY STUDENT FOUND" << endl;
				degree = Degree::SECURITY;
				classRoster.Add(tempArray[0], tempArray[1], tempArray[2], tempArray[3], stoi(tempArray[4]), stoi(tempArray[5]), stoi(tempArray[6]), stoi(tempArray[7]), degree);
			
			
			}
			else if (tempArray[8] == "SOFTWARE")
			{
				//add new student by using software constructor
				//cout << "SOFTWARE STUDENT FOUND" << endl;
				degree = Degree::SOFTWARE;
				classRoster.Add(tempArray[0], tempArray[1], tempArray[2], tempArray[3], stoi(tempArray[4]), stoi(tempArray[5]), stoi(tempArray[6]), stoi(tempArray[7]), degree);
				
			}
			else if (tempArray[8] == "NETWORK")
			{
				//add new student by using software constructor
				//cout << "NETWORK STUDENT FOUND" << endl;
				degree = Degree::NETWORKING;
				classRoster.Add(tempArray[0], tempArray[1], tempArray[2], tempArray[3], stoi(tempArray[4]), stoi(tempArray[5]), stoi(tempArray[6]), stoi(tempArray[7]), degree);
			
			}

		}
	

		

	}



	classRoster.PrintAll();
	classRoster.PrintAverageDaysInCourse("A1");
	classRoster.Remove("A3");
	classRoster.Remove("A3");
	classRoster.PrintByDegreeProgram((int)classRoster.software);



    return 0;
}