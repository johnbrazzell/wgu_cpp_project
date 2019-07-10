#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include "Student.h"

class SecurityStudent
{
public:
    SecurityStudent();
    ~SecurityStudent();

private: 
    Degree degreeType = Degree::SECURITY;

};

#endif // SECURITYSTUDENT_H
