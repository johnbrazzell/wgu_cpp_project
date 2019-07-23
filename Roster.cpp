#include <sstream>
#include <string>
#include <iostream>
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
			
			if (degreeProgram == Degree::SECURITY)
			{
				_classRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, tempDaysArr, degreeProgram);
				break;
			}
			else if (degreeProgram == Degree::NETWORKING)
			{
				_classRosterArray[i] = new NetworkingStudent(studentID, firstName, lastName, emailAddress, age, tempDaysArr, degreeProgram);
break;
			}
			else if (degreeProgram == Degree::SOFTWARE)
			{
			_classRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, tempDaysArr, degreeProgram);
			break;
			}
		}

	}

}

void Roster::Remove(string studentID)
{

	bool studentFound;

	for (int i = 0; i < 5; i++)
	{
		if (_classRosterArray[i]->GetStudentID() == studentID)
		{
			_classRosterArray[i]->SetStudentID(" ");
			studentFound = true;
			break;
		}
		else
		{
			studentFound = false;
		}


	}

	if (studentFound)
	{
		cout << "Student ID Number: " << studentID << " has been removed." << endl;
	}
	else
	{
		cout << "Student ID Number: " << studentID << " was not found." << endl;
	}


}

void Roster::PrintAll()
{
	cout << "Printing All Students:" << endl;

	int rosterCount = 1;

	for (int i = 0; i < 5; i++)
	{

		//cout << rosterCount << " First Name: " << _classRosterArray[i]->GetFirstName() << "\t" << " Last Name: " << _classRosterArray[i]->GetLastName() << "\t"
		//	<< " Age: " << _classRosterArray[i]->GetStudentAge() << "\t" << " Days In Course: " << _classRosterArray[i]->GetDaysInCourse() << "\t" << " Degree Program: " << _classRosterArray[i]->GetDegreeProgram << endl;
		cout << rosterCount << "\t";
		_classRosterArray[i]->Print();
		rosterCount++;
	}
	cout << endl;
}

void Roster::PrintAverageDaysInCourse(string studentID)
{
	cout << "Printing Average Days In Course:" << endl;
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

	cout << endl;

}

void Roster::PrintInvalidEmails()
{
	char space = ' ';
	char atSymbol = '@';
	char period = '.';
	bool atSymbolFound;
	bool periodFound;
	bool spaceFound;
	string tempString;
	size_t emailCharacterFound;

	cout << "Checking and Printing Invalid Emails: " << endl;
	for (int i = 0; i < 5; i++)
	{
		tempString = _classRosterArray[i]->GetEmailAddress();

		//Check for Period
		emailCharacterFound = tempString.find(period);
		if (emailCharacterFound != string::npos)
		{
			periodFound = true;
		}
		else
		{
			periodFound = false;
		}
		
		//Check for @ character
		emailCharacterFound = tempString.find(atSymbol);
		if (emailCharacterFound != string::npos)
		{
			atSymbolFound = true;
		}
		else
		{
			atSymbolFound = false;
		}
		
		//Check for Space character
		emailCharacterFound = tempString.find(space);
		if (emailCharacterFound != string::npos)
		{
			spaceFound = true;
		}
		else
		{
			spaceFound = false;
		}

		if (!periodFound || !atSymbolFound || spaceFound)
		{
			
			cout << "Invalid email: " << tempString << " Found at Student ID " << _classRosterArray[i]->GetStudentID()<< endl;
			
		}
		

		
	}
	cout << endl;
}

void Roster::PrintByDegreeProgram(int degreeProgram)
{


	Degree degreeType;
	if (degreeProgram == 0)
	{
		degreeType = Degree::SECURITY;
		
	}
	else if (degreeProgram == 1)
	{
		degreeType = Degree::NETWORKING;
		
	}
	else if (degreeProgram == 2)
	{
		degreeType = Degree::SOFTWARE;

		
	}
	else
	{
		degreeType = Degree::SOFTWARE;
	}

	cout << "Printing by Degree Type: " << endl;

	for (int i = 0; i < 5; ++i)
	{

		if (degreeType == _classRosterArray[i]->GetDegreeProgram())
		{
			_classRosterArray[i]->Print();

		}
		
	}
	cout << endl;
}




int main()
{
		int SECURITY = 0;
		int NETWORKING = 1;
		int SOFTWARE = 2;
	


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

	cout << "Class: Scripting and Programming Applications" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "Student ID: 000708132" << endl;
	cout << "Name: John Brazzell" << endl << endl;

	classRoster.PrintAll();
	classRoster.PrintInvalidEmails();
	classRoster.PrintAverageDaysInCourse("A1");
	classRoster.PrintByDegreeProgram(2);
	
	cout << "Removing Student: " << endl;
	classRoster.Remove("A3");
	classRoster.Remove("A3");
	classRoster.~Roster();



    return 0;
}