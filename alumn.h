#ifndef ALUMN_H
#define ALUMN_H

#include "base.h"

class Alumn : public Base
{
private:
    int counter;
    vector <float> grades;

public:
    Alumn();
    Alumn(string, string, string);

    int getNumberOfGrades();
    vector<float> getGrades();
    void addGrade(float n);
};

#endif // ALUMN_H
