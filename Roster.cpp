#include "Roster.h"
#include <sstream>

Roster::Roster()
{
}

Roster::~Roster()
{
}

void Roster::testPrintStudentData()
{
   
}

int main()
{
    const string classRosterArray[] =
 {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,John, Brazzell,Jbrazze@wgu.edu, 29, 22, 5, 30,SOFTWARE"};
 
 istringstream sstring(classRosterArray);
    return 0;
}