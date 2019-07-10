#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
#include "Student.h"

class SoftwareStudent
{
public:
    SoftwareStudent();
    ~SoftwareStudent();
    
private:
    Degree degreeType = Degree::SOFTWARE;
    

};

#endif // SOFTWARESTUDENT_H
