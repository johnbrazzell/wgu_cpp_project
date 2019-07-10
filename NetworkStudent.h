#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#include "Student.h"

class NetworkStudent
{
public:
    NetworkStudent();
    ~NetworkStudent();
    
private:
    Degree degreeType = Degree::NETWORKING;

};

#endif // NETWORKSTUDENT_H
